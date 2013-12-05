package com.tealeaf.plugin.plugins;


import android.app.Activity;

import com.google.ads.*;
import com.google.ads.mediation.customevent.CustomEventInterstitial;
import com.google.ads.mediation.customevent.CustomEventInterstitialListener;
import com.google.ads.mediation.MediationAdRequest;

import com.chartboost.sdk.*;

import com.tealeaf.*;


public class ChartboostCustomEventInterstitial implements CustomEventInterstitial {
	private static final String LOG_TAG = "{chartboost}";
	private Chartboost chartboost;

	@Override
	public void requestInterstitialAd(
		CustomEventInterstitialListener listener,
		Activity activity,
		String label,
		String serverParameter,
		MediationAdRequest mediationAdRequest,
		Object customEventExtra
	) {
		logger.log( LOG_TAG, "requestInterstitialAd()" );

		String[] parameters = serverParameter.split( "," );

		if( parameters.length != 2 ) {
			logger.log( LOG_TAG, "requestInterstitialAd(): Invalid parameter " + serverParameter + ", needed \"appId, appSignature\"" );

			return;
		}

		String appId = parameters[ 0 ];
		String appSignature = parameters[ 1 ];

		logger.log( LOG_TAG, "requestInterstitialAd(): AppId: " + appId + ", appSignature: " + appSignature );

		chartboost = Chartboost.sharedChartboost();

		chartboost.onStart( activity );

		chartboost.onCreate(
			activity,
			appId,
			appSignature,
			new ConcreteChartboostDelegate( listener )
		);

		chartboost.startSession();

		if( chartboost.hasCachedInterstitial() ) {
			logger.log( LOG_TAG, "requestInterstitialAd(): Interstitial already cached" );

			listener.onReceivedAd();

		} else {
			logger.log( LOG_TAG, "requestInterstitialAd(): Caching interstitial ad" );

			chartboost.cacheInterstitial();
		}
	}

	@Override
	public void showInterstitial() {
		logger.log( LOG_TAG, "showInterstitial()" );

		if( chartboost.hasCachedInterstitial() ) {
			logger.log( LOG_TAG, "showInterstitial(): Showing interstitial" );

			chartboost.showInterstitial();

		} else {
			logger.log( LOG_TAG, "showInterstitial(): Interstitial not chached, even though it should be" );
		}
	}

	@Override
	public void destroy() {
		logger.log( LOG_TAG, "destroy()" );
	}
}

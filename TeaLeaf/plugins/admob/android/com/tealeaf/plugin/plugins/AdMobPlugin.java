package com.tealeaf.plugin.plugins;

import com.tealeaf.EventQueue;
import com.tealeaf.logger;
import com.tealeaf.plugin.IPlugin;
import com.tealeaf.plugin.plugins.InterstitialEvent;

import com.google.ads.*;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.*;


public class AdMobPlugin implements IPlugin, AdListener {
	private static final String LOG_TAG = "{admob}";
	private Context applicationContext;
	private InterstitialAd interstitial;


	public AdMobPlugin() {
		logger.log( LOG_TAG, "AdMobPlugin" );
	}

	public void onCreateApplication( Context applicationContext ) {
		logger.log( LOG_TAG, "onCreateApplication" );

		applicationContext = applicationContext;
	}

	@Override
	public void onCreate( Activity activity, Bundle savedInstanceState ) {
		logger.log( LOG_TAG, "onCreate" );

		try {
			PackageManager manager = activity.getPackageManager();
			Bundle meta            = manager.getApplicationInfo( activity.getPackageName(), PackageManager.GET_META_DATA ).metaData;
			String publisherId     = meta != null ? meta.getString( "ADMOB_PUBLISHER_ID" ) : "";

			logger.log(
				LOG_TAG,
				publisherId != "" ?
					"using publisher id: " + publisherId :
					"no publisher id provided"
			);

			interstitial = new InterstitialAd( activity, publisherId );

		} catch( Exception e ) {
			logger.log( LOG_TAG, e.getMessage() );
		}
	}

	public void loadInterstitial( String json ) {
		logger.log( LOG_TAG, "loadInterstitial" );

		interstitial.setAdListener( this );

		new Handler(
			Looper.getMainLooper()
		).post(
			new Runnable() {
				public void run() {
					interstitial.loadAd( new AdRequest() );
				}
			}
		);
	}

	public void showInterstitial( String json ) {
		try {
			logger.log( LOG_TAG, "showInterstitial" );

			if( interstitial.isReady() ) {
				interstitial.show();

			} else {
				logger.log( LOG_TAG, "no interstitial loaded yet" );
			}

		} catch( Exception e ) {
			logger.log( LOG_TAG, "showInterstitial failed with: ", e.getMessage() );
		}
	}

	public void onResume() {}

	public void onStart() {}

	public void onPause() {}

	public void onStop() {}

	public void onDestroy() {
		interstitial.stopLoading();
	}

	public void onNewIntent( Intent intent ) {}

	public void setInstallReferrer( String referrer ) {}

	public void onActivityResult( Integer request, Integer result, Intent data ) {}

	public void onBackPressed() {}

	public boolean consumeOnBackPressed() {
		return true;
	}

	/**
	 * Called when an ad is clicked and about to return to the application.
	 */
	@Override
	public void onDismissScreen( Ad ad ) {
		logger.log( LOG_TAG, "onDismissScreen" );

		EventQueue.pushEvent( new InterstitialEvent( false ) );
	}

	/**
	 * Called when receiving an ad failed.
	 */
	@Override
	public void onFailedToReceiveAd( Ad ad, AdRequest.ErrorCode error ) {
		logger.log( LOG_TAG, "onFailedToReceiveAd (" + error + ")" );
	}

	/**
	 * Called when an ad is clicked and going to start a new Activity that will
	 * leave the application (e.g. breaking out to the Browser or Maps
	 * application).
	 */
	@Override
	public void onLeaveApplication( Ad ad ) {
		logger.log( LOG_TAG, "onLeaveApplication" );
	}

	/**
	 * Called when an Activity is created in front of the app (e.g. an
	 * interstitial is shown, or an ad is clicked and launches a new Activity).
	 */
	@Override
	public void onPresentScreen( Ad ad ) {
		logger.log( LOG_TAG, "onPresentScreen" );

		EventQueue.pushEvent( new InterstitialEvent( true ) );
	}

	/**
	 * Called when an ad is received.
	 */
	@Override
	public void onReceiveAd( Ad ad ) {
		logger.log( LOG_TAG, "onReceiveAd" );
	}
}


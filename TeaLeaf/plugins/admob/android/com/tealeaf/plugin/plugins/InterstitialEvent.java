package com.tealeaf.plugin.plugins;

import com.tealeaf.event.Event;


public class InterstitialEvent extends Event {
	boolean isShown;

	public InterstitialEvent( boolean isShown ) {
		super( "interstitial" );
		this.isShown = isShown;
	}
}

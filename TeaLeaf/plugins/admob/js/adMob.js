var AdMob = Class(function () {
	this.showInterstitial = function () {
		logger.log("{adMob} Showing interstitial");

		if( NATIVE && NATIVE.plugins &&
			NATIVE.plugins.sendEvent ) {
		
			NATIVE.plugins.sendEvent( "AdMobplugin", "showInterstitial", JSON.stringify( {} ) );
		}
	};
});

exports = new AdMob();

<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:android="http://schemas.android.com/apk/res/android">
        <xsl:param name="adMobPublisherId" />

        <xsl:template match="meta-data[@android:name='ADMOB_PUBLISHER_ID']">
                <meta-data android:name="ADMOB_PUBLISHER_ID" android:value="{$androidAdMobPublisherId}"/>
        </xsl:template>

	<xsl:template match="@*|node()">
		<xsl:copy>
			<xsl:apply-templates select="@*|node()" />
		</xsl:copy>
	</xsl:template>
</xsl:stylesheet>

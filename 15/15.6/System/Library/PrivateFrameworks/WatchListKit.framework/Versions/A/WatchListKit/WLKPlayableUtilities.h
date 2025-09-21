@interface WLKPlayableUtilities : NSObject

+ (char)_openPunchoutURL:(id)a0 isPlaybackURL:(char)a1;
+ (id)_defaultOpenPunchoutURLWithPlayable:(id)a0;
+ (id)_defaultPlayPunchoutURLWithPlayable:(id)a0;
+ (id)_defaultPunchoutURLWithPlayable:(id)a0 URLKey:(id)a1;
+ (id)_defaultPunchoutURLWithPlayable:(id)a0 isPlaybackURL:(char *)a1;
+ (char)_openITunesPlayableWatchListAppAvailable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (char)_openITunesPlayableWatchListAppUnavailable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (char)_openNonITunesPlayableWatchListAppAvailable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (char)_openNonITunesPlayableWatchListAppUnavailable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (char)_playNonITunesPlayableUsingAssociatedApp:(id)a0;
+ (id)_punchoutURLForDirectPlayback:(id)a0 ignoreExtras:(char)a1;
+ (id)_watchListAppOpenPunchoutURLWithITunesPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;
+ (id)_watchListAppPunchoutURLWithPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4 allowPlayAction:(char)a5 isPlaybackURL:(char *)a6;
+ (char)openPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2;
+ (char)openPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3;
+ (char)openPlayable:(id)a0 forContentType:(unsigned long long)a1 canonicalID:(id)a2 showCanonicalID:(id)a3 seasonCanonicalID:(id)a4;

@end

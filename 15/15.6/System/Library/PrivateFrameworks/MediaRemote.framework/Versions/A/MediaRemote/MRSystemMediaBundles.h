@interface MRSystemMediaBundles : NSObject

+ (id)airPlayBundleID;
+ (id)_allSystemMediaBundles;
+ (id)_playbackProcessBundleIDForBundle:(unsigned long long)a0;
+ (id)_uiApplicationBundleIDForBundle:(unsigned long long)a0;
+ (id)airPlayProcessName;
+ (char)isBundleCurrentApplicationAirPlayReceiver;
+ (char)isBundleID:(id)a0 systemMediaBundle:(unsigned long long)a1;
+ (char)isProcessNameAirPlayReceiver:(id)a0;
+ (char)isSystemMediaBundle:(id)a0;
+ (id)systemMediaBundleIDForBundle:(unsigned long long)a0 type:(unsigned long long)a1;
+ (id)systemMediaBundleIDForBundleID:(id)a0 type:(unsigned long long)a1;

@end

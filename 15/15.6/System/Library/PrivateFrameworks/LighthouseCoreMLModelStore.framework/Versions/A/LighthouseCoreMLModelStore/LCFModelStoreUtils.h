@interface LCFModelStoreUtils : NSObject

+ (char)isSupportedPlatform;
+ (id)getBaseLocalPath;
+ (char)isPlatformMacOS;
+ (char)isEnabledOnMacOS;
+ (char)isPlatformWatchOS;
+ (char)isPlatformiOS;
+ (char)isPlatformtvOS;
+ (void)SwitchToMobile;
+ (id)sha256For:(id)a0;
+ (id)sha256ForURL:(id)a0;

@end

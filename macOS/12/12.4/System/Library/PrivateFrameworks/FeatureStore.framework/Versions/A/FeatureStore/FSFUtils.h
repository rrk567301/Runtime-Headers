@interface FSFUtils : NSObject

+ (BOOL)isSupportedPlatform;
+ (id)getStreamPath;
+ (id)getBaseLocalPath;
+ (id)getBase64EncodedStrFromData:(id)a0;
+ (id)getDataFromBase64EncodedStr:(id)a0;
+ (id)getStreamURL;
+ (BOOL)isPlatformiOS;
+ (BOOL)isPlatformtvOS;
+ (BOOL)isPlatformWatchOS;
+ (BOOL)isPlatformMacOS;
+ (BOOL)isEnabledOnMacOS;

@end

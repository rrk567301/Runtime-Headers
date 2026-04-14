@interface FSFUtils : NSObject

+ (BOOL)isSupportedPlatform;
+ (id)getStreamPath;
+ (id)getBaseLocalPath;
+ (id)getBase64EncodedStrFromData:(id)a0;
+ (id)getDataFromBase64EncodedStr:(id)a0;
+ (BOOL)isPlatformiOS;
+ (BOOL)isEnabledOnMacOS;
+ (BOOL)isPlatformMacOS;
+ (BOOL)isPlatformWatchOS;
+ (BOOL)isPlatformtvOS;
+ (BOOL)isSupportedUser;
+ (id)getStreamURL;
+ (id)availableStreams;
+ (BOOL)isUnderLegalRestriction;

@end

@interface FSFUtils : NSObject

+ (BOOL)isSupportedPlatform;
+ (id)getBaseLocalPath;
+ (id)getStreamPath;
+ (BOOL)isSupportedUser;
+ (BOOL)isPlatformMacOS;
+ (id)availableStreams;
+ (id)getBase64EncodedStrFromData:(id)a0;
+ (id)getDataFromBase64EncodedStr:(id)a0;
+ (id)getStreamURL;
+ (BOOL)isEnabledOnMacOS;
+ (BOOL)isPlatformWatchOS;
+ (BOOL)isPlatformiOS;
+ (BOOL)isPlatformtvOS;
+ (BOOL)isUnderLegalRestriction;

@end

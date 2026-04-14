@interface FSFUtils : NSObject

+ (BOOL)isSupportedPlatform;
+ (id)getBaseLocalPath;
+ (id)getStreamPath;
+ (id)biomeStoreConfig;
+ (BOOL)isSupportedUser;
+ (BOOL)isPlatformMacOS;
+ (id)availableStreams;
+ (unsigned long long)biomeMaxStreamSizeInBytes;
+ (id)getBase64EncodedStrFromData:(id)a0;
+ (id)getDataFromBase64EncodedStr:(id)a0;
+ (id)getStreamURL;
+ (BOOL)isEnabledOnMacOS;
+ (BOOL)isPlatformWatchOS;
+ (BOOL)isPlatformiOS;
+ (BOOL)isPlatformtvOS;
+ (BOOL)isUnderLegalRestriction;

@end

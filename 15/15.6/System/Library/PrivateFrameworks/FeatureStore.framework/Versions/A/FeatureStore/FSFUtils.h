@interface FSFUtils : NSObject

+ (char)isSupportedPlatform;
+ (id)getBaseLocalPath;
+ (id)getStreamPath;
+ (char)isSupportedUser;
+ (char)isPlatformMacOS;
+ (id)availableStreams;
+ (unsigned long long)biomeMaxStreamSizeInBytes;
+ (id)biomeStoreConfig;
+ (id)getBase64EncodedStrFromData:(id)a0;
+ (id)getDataFromBase64EncodedStr:(id)a0;
+ (id)getStreamURL;
+ (char)isEnabledOnMacOS;
+ (char)isPlatformWatchOS;
+ (char)isPlatformiOS;
+ (char)isPlatformtvOS;
+ (char)isUnderLegalRestriction;

@end

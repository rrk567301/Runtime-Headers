@interface CLSUtil : NSObject

@property (class, readonly, nonatomic) char isAppleInternalInstall;
@property (class, readonly, nonatomic) char isSystemIntegrityEnabled;

+ (void)postNotification:(char *)a0;
+ (id)stringFromTimeInterval:(double)a0;
+ (id)dataFromError:(id)a0;
+ (id)dataFromPath:(id)a0 makeBackwardCompatible:(char)a1 error:(id *)a2;
+ (id)dictionaryStrippingNSNullValues:(id)a0;
+ (id)errorFromData:(id)a0;
+ (void)fetchInfoForAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)hashArrayOfStrings:(id)a0 lastHash:(id)a1;
+ (id)hashData:(id)a0 lastHash:(id)a1;
+ (id)hashData:(id)a0 lastHashData:(id)a1;
+ (id)mediumDateFormatter;
+ (id)mediumStringFromDate:(id)a0;
+ (id)pathFromData:(id)a0;
+ (id)percentNumberFormatter;
+ (id)percentageStringFromNumber:(id)a0;
+ (void)postNotificationAsync:(char *)a0;

@end

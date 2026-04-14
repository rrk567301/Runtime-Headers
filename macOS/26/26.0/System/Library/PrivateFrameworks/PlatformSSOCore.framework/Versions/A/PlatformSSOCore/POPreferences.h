@class NSNumber;

@interface POPreferences : NSObject

@property (class, readonly, nonatomic) BOOL requireRootCAInSystemTrustStore;
@property (class, readonly, nonatomic) BOOL forceKerberosTGTExchange;
@property (class, readonly, nonatomic) NSNumber *forceExtensionSDKVersion;
@property (class, readonly, nonatomic) BOOL skipPreMDMDeviceRegistration;
@property (class, readonly, nonatomic) BOOL buddyTestMode;

+ (BOOL)boolValueForKey:(struct __CFString { } *)a0 defaultValue:(BOOL)a1;
+ (id)numberValueForKey:(struct __CFString { } *)a0 defaultValue:(id)a1;

@end

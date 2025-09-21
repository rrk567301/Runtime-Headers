@class NSNumber;

@interface POPreferences : NSObject

@property (class, readonly, nonatomic) char requireRootCAInSystemTrustStore;
@property (class, readonly, nonatomic) char forceKerberosTGTExchange;
@property (class, readonly, nonatomic) NSNumber *forceExtensionSDKVersion;

+ (id)numberValueForKey:(struct __CFString { } *)a0 defaultValue:(id)a1;
+ (char)boolValueForKey:(struct __CFString { } *)a0 defaultValue:(char)a1;

@end

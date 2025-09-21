@interface AMSEphemeralDefaults : NSObject

@property (class) long long HARLoggingItemLimit;
@property (class) char preferEphemeralImageLoader;
@property (class) char preferEphemeralURLSessions;
@property (class) char processAssertionsEnabled;
@property (class) char purchaseAccountFallback;
@property (class) char suppressEngagement;
@property (class) long long forceLoadUrlMetrics;

+ (void)_setProperty:(id)a0 forKey:(id)a1;
+ (char)HARLoggingEnabled;
+ (void)_accessDataStoreUsingBlock:(id /* block */)a0;
+ (id)_propertyForKey:(id)a0 defaultValue:(id)a1 expectedType:(Class)a2;
+ (char)bagKeyRegistrationEnabled;
+ (void)setBagKeyRegistrationEnabled:(char)a0;
+ (void)setHARLoggingEnabled:(char)a0;

@end

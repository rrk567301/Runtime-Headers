@interface AMSEphemeralDefaults : NSObject

@property (class) long long HARLoggingItemLimit;
@property (class) BOOL preferEphemeralImageLoader;
@property (class) BOOL preferEphemeralURLSessions;
@property (class) BOOL processAssertionsEnabled;
@property (class) BOOL purchaseAccountFallback;
@property (class) BOOL suppressEngagement;
@property (class) long long forceLoadUrlMetrics;

+ (id)_propertyForKey:(id)a0 defaultValue:(id)a1 expectedType:(Class)a2;
+ (void)setBagKeyRegistrationEnabled:(BOOL)a0;
+ (BOOL)bagKeyRegistrationEnabled;
+ (BOOL)HARLoggingEnabled;
+ (void)_setProperty:(id)a0 forKey:(id)a1;
+ (void)setHARLoggingEnabled:(BOOL)a0;
+ (void)_accessDataStoreUsingBlock:(id /* block */)a0;

@end

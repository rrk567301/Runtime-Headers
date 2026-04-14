@interface AMSEphemeralDefaults : NSObject

@property (class) long long HARLoggingItemLimit;
@property (class) BOOL preferEphemeralImageLoader;
@property (class) BOOL preferEphemeralURLSessions;
@property (class) BOOL processAssertionsEnabled;
@property (class) BOOL purchaseAccountFallback;
@property (class) BOOL suppressEngagement;
@property (class) long long forceLoadUrlMetrics;

+ (void)setHARLoggingEnabled:(BOOL)a0;
+ (BOOL)HARLoggingEnabled;
+ (void)_accessDataStoreUsingBlock:(id /* block */)a0;
+ (void)setBagKeyRegistrationEnabled:(BOOL)a0;
+ (void)_setProperty:(id)a0 forKey:(id)a1;
+ (id)_propertyForKey:(id)a0 defaultValue:(id)a1 expectedType:(Class)a2;
+ (BOOL)bagKeyRegistrationEnabled;

@end

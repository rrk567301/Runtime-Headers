@interface AMSEphemeralDefaults : NSObject

@property (class) BOOL bagKeyRegistrationEnabled;
@property (class) BOOL HARLoggingEnabled;
@property (class) long long HARLoggingItemLimit;
@property (class) BOOL preferEphemeralImageLoader;
@property (class) BOOL preferEphemeralURLSessions;
@property (class) BOOL processAssertionsEnabled;
@property (class) BOOL purchaseAccountFallback;
@property (class) BOOL suppressEngagement;

+ (void)_setProperty:(id)a0 forKey:(id)a1;
+ (id)_propertyForKey:(id)a0 defaultValue:(id)a1 expectedType:(Class)a2;
+ (void)_accessDataStoreUsingBlock:(id /* block */)a0;

@end

@interface SKACALogger : SwiftNativeNSObject

+ (void)logEvent:(long long)a0 withMetadata:(id)a1;
+ (void)logFailureWithError:(id)a0 event:(long long)a1 forClient:(id)a2;
+ (void)logFailureWithError:(id)a0 forToken:(id)a1;
+ (void)logSuccessForEvent:(long long)a0 forClient:(id)a1;
+ (void)logSuccessForToken:(id)a0;
+ (id)startLoggingEvent:(long long)a0 forClient:(id)a1;

- (id)init;

@end

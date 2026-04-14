@interface CSSubscriptionManager : NSObject {
    id _internal;
}

+ (id)sharedManager;

- (void)registerSubscriptionWithInfo:(id)a0 expirationDate:(id)a1;
- (void)unregisterAllSubscriptions;
- (void).cxx_destruct;
- (void)unregisterSubscriptionWithInfo:(id)a0;
- (id)init;

@end

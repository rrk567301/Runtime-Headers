@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManager : NSObject

@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter;

- (void)registerSubscriptionWithInfo:(id)a0 expirationDate:(id)a1;
- (void).cxx_destruct;
- (void)unregisterSubscriptionWithInfo:(id)a0;
- (id)init;
- (void)unregisterAllSubscriptions;

@end

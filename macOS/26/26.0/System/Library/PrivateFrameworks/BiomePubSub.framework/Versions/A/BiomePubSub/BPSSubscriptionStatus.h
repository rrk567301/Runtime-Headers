@class BPSSubscription;

@interface BPSSubscriptionStatus : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) BPSSubscription *subscription;

+ (id)subscribedWithSubscription:(id)a0;
+ (id)terminal;
+ (id)awaitingSubscription;

- (id)initWithState:(long long)a0 subscription:(id)a1;
- (void).cxx_destruct;

@end

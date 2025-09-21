@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject <NSSecureCoding> {
    NSDictionary *_backingDictionary;
    NSArray *_subscriptionArray;
    NSDictionary *_account;
    NSDictionary *_family;
    NSDictionary *_subscriptionsByAdamID;
    long long _activeSubscriptionsCount;
    NSDictionary *_activeTVPlusSubscription;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)currentAccount;
- (id)subscriptionByAdamID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSubscriptionData:(id)a0;
- (id)subscriptions;
- (id)currentFamily;
- (BOOL)isTVPlusSubscriber;
- (id)initWithCoder:(id)a0;
- (unsigned long long)activeSubscriptionsCount;
- (id)activeTVPlusSubscription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

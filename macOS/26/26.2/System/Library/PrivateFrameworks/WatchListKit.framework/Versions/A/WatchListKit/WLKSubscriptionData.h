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

- (id)subscriptions;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToSubscriptionData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)subscriptionByAdamID:(id)a0;
- (void).cxx_destruct;
- (BOOL)isTVPlusSubscriber;
- (id)activeTVPlusSubscription;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)activeSubscriptionsCount;
- (id)currentFamily;
- (id)currentAccount;

@end

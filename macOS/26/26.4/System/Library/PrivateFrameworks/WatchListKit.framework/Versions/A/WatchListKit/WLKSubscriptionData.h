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

- (id)currentFamily;
- (id)currentAccount;
- (id)subscriptions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isTVPlusSubscriber;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)activeTVPlusSubscription;
- (BOOL)isEqualToSubscriptionData:(id)a0;
- (void).cxx_destruct;
- (id)subscriptionByAdamID:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)activeSubscriptionsCount;
- (id)initWithCoder:(id)a0;

@end

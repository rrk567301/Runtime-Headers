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
- (BOOL)isEqualToSubscriptionData:(id)a0;
- (BOOL)isTVPlusSubscriber;
- (id)currentFamily;
- (void).cxx_destruct;
- (id)subscriptionByAdamID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)currentAccount;
- (id)activeTVPlusSubscription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)activeSubscriptionsCount;

@end

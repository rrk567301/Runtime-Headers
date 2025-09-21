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

@property (class, readonly) char supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)currentAccount;
- (id)subscriptions;
- (id)currentFamily;
- (unsigned long long)activeSubscriptionsCount;
- (id)activeTVPlusSubscription;
- (char)isEqualToSubscriptionData:(id)a0;
- (char)isTVPlusSubscriber;
- (id)subscriptionByAdamID:(id)a0;

@end

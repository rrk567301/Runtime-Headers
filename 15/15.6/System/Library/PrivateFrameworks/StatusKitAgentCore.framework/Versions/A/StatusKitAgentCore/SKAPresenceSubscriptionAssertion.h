@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *subscriptionIdentifier;

+ (id)logger;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubscriptionIdentifier:(id)a0;
- (char)isEqualToPresenceSubscription:(id)a0;

@end

@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKATransientSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *subscriptionIdentifier;

+ (id)logger;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToTransientSubscription:(id)a0;
- (id)initWithSubscriptionIdentifier:(id)a0;

@end

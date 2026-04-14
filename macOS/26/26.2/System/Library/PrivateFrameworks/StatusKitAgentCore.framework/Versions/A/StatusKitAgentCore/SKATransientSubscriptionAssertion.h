@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKATransientSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *subscriptionIdentifier;

+ (id)logger;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (BOOL)isEqualToTransientSubscription:(id)a0;
- (id)initWithSubscriptionIdentifier:(id)a0;

@end

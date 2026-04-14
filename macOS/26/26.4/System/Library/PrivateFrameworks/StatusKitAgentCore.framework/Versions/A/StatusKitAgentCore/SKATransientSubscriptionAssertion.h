@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKATransientSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *subscriptionIdentifier;

+ (id)logger;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithSubscriptionIdentifier:(id)a0;
- (BOOL)isEqualToTransientSubscription:(id)a0;

@end

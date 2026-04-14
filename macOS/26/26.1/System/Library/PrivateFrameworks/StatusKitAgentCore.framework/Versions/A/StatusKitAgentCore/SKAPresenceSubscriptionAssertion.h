@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *channelIdentifier;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;

+ (id)logger;

- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithChannelIdentifier:(id)a0 presenceIdentifier:(id)a1;
- (BOOL)isEqualToPresenceSubscription:(id)a0;

@end

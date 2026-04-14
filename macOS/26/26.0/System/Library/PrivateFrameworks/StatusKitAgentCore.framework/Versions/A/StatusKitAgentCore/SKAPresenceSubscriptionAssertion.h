@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *channelIdentifier;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;

+ (id)logger;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannelIdentifier:(id)a0 presenceIdentifier:(id)a1;
- (BOOL)isEqualToPresenceSubscription:(id)a0;

@end

@class NSString, SKAPresenceChannel, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *channelIdentifier;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) int subscribedFilterStateOverride;
@property (copy, nonatomic) SKAPresenceChannel *channel;

+ (id)logger;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithChannelIdentifier:(id)a0 presenceIdentifier:(id)a1 serviceIdentifier:(id)a2 filterOverride:(int)a3 channel:(id)a4;
- (BOOL)isEqualToPresenceSubscription:(id)a0;

@end

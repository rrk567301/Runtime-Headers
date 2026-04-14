@class NSString, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *channelIdentifier;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;

+ (id)logger;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithChannelIdentifier:(id)a0 presenceIdentifier:(id)a1;
- (BOOL)isEqualToPresenceSubscription:(id)a0;

@end

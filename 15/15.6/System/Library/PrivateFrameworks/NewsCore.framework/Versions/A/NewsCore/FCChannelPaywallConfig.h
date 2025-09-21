@class NSString;

@interface FCChannelPaywallConfig : NSObject

@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) char filterALaCartePaidArticlesForPaidBundleSubscribers;
@property (readonly, nonatomic) unsigned long long articleSoftPaywallPosition;
@property (readonly, nonatomic) unsigned long long articleSoftPaywallPositionForPaidBundleSubscribers;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 configDictionary:(id)a1;

@end

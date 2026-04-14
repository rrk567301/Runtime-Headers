@class NSString;

@interface FCChannelPaywallConfig : NSObject

@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL filterALaCartePaidArticlesForPaidBundleSubscribers;
@property (readonly, nonatomic) unsigned long long articleSoftPaywallPosition;
@property (readonly, nonatomic) unsigned long long articleSoftPaywallPositionForPaidBundleSubscribers;

- (id)initWithChannelID:(id)a0 configDictionary:(id)a1;
- (void).cxx_destruct;

@end

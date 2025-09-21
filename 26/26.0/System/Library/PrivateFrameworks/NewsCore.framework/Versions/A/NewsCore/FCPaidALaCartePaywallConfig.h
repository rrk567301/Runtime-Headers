@class NSString;

@interface FCPaidALaCartePaywallConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *channelPaywallTitle;
@property (copy, nonatomic) NSString *hardPaywallTitle;
@property (copy, nonatomic) NSString *leakyPaywallTitle;
@property (copy, nonatomic) NSString *promotionalPaywallTitle;
@property (readonly, nonatomic) NSString *channelID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithChannelID:(id)a0 configDictionary:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 channelPaywallTitle:(id)a1 hardPaywallTitle:(id)a2 leakyPaywallTitle:(id)a3 promotionalPaywallTitle:(id)a4;

@end

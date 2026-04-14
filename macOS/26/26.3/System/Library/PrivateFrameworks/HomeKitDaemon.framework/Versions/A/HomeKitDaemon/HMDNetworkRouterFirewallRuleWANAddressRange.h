@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject

@property (readonly, nonatomic) HMFNetAddress *addressStart;
@property (readonly, nonatomic) HMFNetAddress *addressEnd;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAddressStart:(id)a0 addressEnd:(id)a1;
- (id)prettyJSONDictionary;

@end

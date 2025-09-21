@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject

@property (readonly, nonatomic) HMFNetAddress *addressStart;
@property (readonly, nonatomic) HMFNetAddress *addressEnd;

- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddressStart:(id)a0 addressEnd:(id)a1;
- (id)prettyJSONDictionary;

@end

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleLANMulticast : HMDNetworkRouterFirewallRuleLAN

@property (readonly, nonatomic) HMFNetAddress *ipAddress;
@property (readonly, nonatomic) unsigned short port;

+ (id)createWithJSONDictionary:(id)a0 name:(id)a1 critical:(char)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(char)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(char)a6 ruleDictionary:(id)a7 error:(id *)a8;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(char)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(char)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(char)a6 ipAddress:(id)a7 port:(unsigned short)a8;
- (id)prettyJSONDictionary;

@end

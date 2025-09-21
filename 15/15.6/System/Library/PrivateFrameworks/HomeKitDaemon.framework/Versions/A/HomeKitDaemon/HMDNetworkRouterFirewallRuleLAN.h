@interface HMDNetworkRouterFirewallRuleLAN : HMDNetworkRouterFirewallRule

@property (readonly, nonatomic) unsigned long long purpose;
@property (readonly, nonatomic, getter=areConnectionsWithOtherAccessoriesAllowed) char allowInterAccessoryConnections;
@property (readonly, nonatomic) unsigned char direction;
@property (readonly, nonatomic, getter=isRequiredForHAPFunctionality) char requiredForHAPFunctionality;

+ (id)createWithJSONDictionary:(id)a0 error:(id *)a1;
+ (char)__decodeDirection:(id)a0 direction:(unsigned char *)a1 error:(id *)a2;
+ (char)__decodeFlags:(id)a0 critical:(char *)a1 allowInterAccessoryConnections:(char *)a2 requiredForHAPFunctionality:(char *)a3 error:(id *)a4;
+ (char)__decodePurpose:(id)a0 purpose:(unsigned long long *)a1 error:(id *)a2;
+ (char)__decodeTransportProtocolFromJSONDictionary:(id)a0 key:(id)a1 transportProtocol:(unsigned char *)a2 error:(id *)a3;
+ (char)__decodeType:(id)a0 type:(unsigned char *)a1 error:(id *)a2;
+ (id)createWithJSONDictionary:(id)a0 name:(id)a1 critical:(char)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(char)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(char)a6 ruleDictionary:(id)a7 error:(id *)a8;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(char)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(char)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(char)a6;
- (id)prettyJSONDictionary;

@end

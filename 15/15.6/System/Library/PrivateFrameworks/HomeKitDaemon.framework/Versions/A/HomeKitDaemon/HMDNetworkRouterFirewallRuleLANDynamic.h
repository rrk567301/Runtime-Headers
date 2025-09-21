@class NSString;

@interface HMDNetworkRouterFirewallRuleLANDynamic : HMDNetworkRouterFirewallRuleLAN

@property (readonly, nonatomic) unsigned char transportProtocol;
@property (readonly, nonatomic) unsigned char advertisingProtocol;
@property (readonly, nonatomic, getter=isAdvertisingOnly) char advertisingOnly;
@property (readonly, nonatomic) NSString *serviceType;

+ (id)__advertisingProtocolToString:(unsigned char)a0;
+ (char)__decodeAdvertisingProtocol:(id)a0 advertisingProtocol:(unsigned char *)a1 error:(id *)a2;
+ (char)__decodeFlags:(id)a0 advertisingOnly:(char *)a1 error:(id *)a2;
+ (char)__decodeServiceType:(id)a0 serviceType:(id *)a1 error:(id *)a2;
+ (id)createWithJSONDictionary:(id)a0 name:(id)a1 critical:(char)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(char)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(char)a6 ruleDictionary:(id)a7 error:(id *)a8;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(id)a0 name:(id)a1 critical:(char)a2 purpose:(unsigned long long)a3 allowInterAccessoryConnections:(char)a4 direction:(unsigned char)a5 requiredForHAPFunctionality:(char)a6 transportProtocol:(unsigned char)a7 advertisingProtocol:(unsigned char)a8 advertisingOnly:(char)a9 serviceType:(id)a10;
- (id)prettyJSONDictionary;

@end

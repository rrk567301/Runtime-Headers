@class NSArray, NSDictionary, NSString, NSDate, HMDNetworkRouterFirewallRuleAccessoryIdentifier;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier;
@property (readonly, nonatomic) NSDate *lastModifiedTime;
@property (readonly, nonatomic) NSArray *lanRules;
@property (readonly, nonatomic, getter=hasFullAccessToLAN) char fullAccessLAN;
@property (readonly, nonatomic) NSArray *wanRules;
@property (readonly, nonatomic, getter=hasFullAccessToWAN) char fullAccessWAN;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) char hasAirplayRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (char)__decodeFullAccessFromNetworkDeclarations:(id)a0 key:(id)a1 fullAccess:(char *)a2;
+ (char)__decodeNetworkDeclarationsFromJSONDictionary:(id)a0 networkDeclarations:(id *)a1;
+ (id)__decodeRulesFromNetworkDeclarations:(id)a0 key:(id)a1 class:(Class)a2 required:(char)a3;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessoryIdentifier:(id)a0 jsonDictionary:(id)a1;
- (id)initWithAccessoryIdentifier:(id)a0 lastModifiedTime:(id)a1 fullAccessLAN:(char)a2 lanRules:(id)a3 fullAccessWAN:(char)a4 wanRules:(id)a5;

@end

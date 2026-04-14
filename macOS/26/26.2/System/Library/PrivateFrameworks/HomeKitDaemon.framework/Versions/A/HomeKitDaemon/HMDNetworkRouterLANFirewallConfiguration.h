@class HMDNetworkRouterLANFirewallRuleList, NSString, HMDNetworkRouterLANFirewall;

@interface HMDNetworkRouterLANFirewallConfiguration : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HMDNetworkRouterLANFirewall *type;
@property (retain, nonatomic) HMDNetworkRouterLANFirewallRuleList *ruleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;
+ (id)configurationFromFirewallRuleConfiguration:(id)a0;
+ (id)configurationWithFullAccess;

- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)serializeWithError:(id *)a0;
- (void)addRulesFromFirewallConfiguration:(id)a0;
- (id)initWithType:(id)a0 ruleList:(id)a1;

@end

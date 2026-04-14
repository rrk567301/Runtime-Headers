@class NSString, NSPPrivacyProxyPolicy, NSArray, NSMutableDictionary, NEPolicySession, NSMutableSet, NSMutableArray, NEFlowDivertFileHandle;

@interface NSPPrivacyProxyPolicyHandler : NSObject {
    BOOL _wifiDisabled;
    BOOL _cellularDisabled;
    NSPPrivacyProxyPolicy *_policy;
    NEPolicySession *_session;
    NEFlowDivertFileHandle *_flowDivertHandle;
    NSString *_ingressProxyURL;
    NSString *_ingressFallbackProxyURL;
    NSArray *_captivePluginBundleIDs;
    NSMutableArray *_mainPolicyIDs;
    NSMutableSet *_disabledInterfaces;
    NSMutableArray *_interfacePolicyIDs;
    NSMutableArray *_safariTechnologyPreviewPolicyIDs;
    NSMutableArray *_safariBundlePolicyIDs;
    NSMutableArray *_mailAppPolicyIDs;
    NSMutableArray *_probePolicyIDs;
    NSMutableDictionary *_domainFilterPolicyIDs;
    NSMutableDictionary *_domainFilterIDs;
    NSMutableDictionary *_obliviousAgentPolicyIDs;
    NSMutableArray *_mptcpProxyPolicyIDs;
    NSMutableArray *_networkToolProxyPolicyIDs;
}

+ (id)sharedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)remove:(BOOL)a0;
- (id)currentPolicy;
- (BOOL)set:(id)a0 flowDivertHandle:(id)a1 ingressProxyURL:(id)a2 ingressFallbackProxyURL:(id)a3 captivePluginBundleIDs:(id)a4;
- (void)addPreferredProxy:(id)a0 agentUUID:(id)a1 withDomainFilter:(id)a2;
- (void)removePreferredProxy:(id)a0 apply:(BOOL)a1;
- (void)wifiDisabled:(BOOL)a0;
- (void)cellularDisabled:(BOOL)a0;
- (void)interface:(id)a0 disabled:(BOOL)a1;
- (void)replaceDisabledInterfaces:(id)a0;
- (void)addObliviousProxyAgent:(id)a0 hostname:(id)a1;
- (void)removeObliviousProxyAgentForHostname:(id)a0 apply:(BOOL)a1;
- (BOOL)addPoliciesForProbing;
- (void)handleAppInstallation:(id)a0;
- (void)handleAppUninstallation:(id)a0;
- (BOOL)addPoliciesForMPTCPConverterProxy:(id)a0;
- (void)removePoliciesForMPTCPConverterProxy:(BOOL)a0;

@end

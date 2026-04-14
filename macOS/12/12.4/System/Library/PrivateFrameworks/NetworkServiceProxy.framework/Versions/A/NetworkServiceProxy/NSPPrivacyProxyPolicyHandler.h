@class NSString, NSPPrivacyProxyPolicy, NSArray, NSMutableDictionary, NEPolicySession, NSMutableSet, NSMutableArray, NEFlowDivertFileHandle;

@interface NSPPrivacyProxyPolicyHandler : NSObject

@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy;
@property (retain, nonatomic) NEPolicySession *session;
@property (retain, nonatomic) NEFlowDivertFileHandle *flowDivertHandle;
@property (retain, nonatomic) NSString *ingressProxyURL;
@property (retain, nonatomic) NSString *ingressFallbackProxyURL;
@property (retain, nonatomic) NSArray *captivePluginBundleIDs;
@property (retain, nonatomic) NSMutableArray *mainPolicyIDs;
@property (retain, nonatomic) NSMutableSet *disabledInterfaces;
@property (nonatomic) BOOL wifiDisabled;
@property (nonatomic) BOOL cellularDisabled;
@property (retain, nonatomic) NSMutableArray *interfacePolicyIDs;
@property (retain, nonatomic) NSMutableArray *safariTechnologyPreviewPolicyIDs;
@property (retain, nonatomic) NSMutableArray *safariBundlePolicyIDs;
@property (retain, nonatomic) NSMutableArray *mailAppPolicyIDs;
@property (retain, nonatomic) NSMutableArray *probePolicyIDs;
@property (retain, nonatomic) NSMutableDictionary *domainFilterPolicyIDs;
@property (retain, nonatomic) NSMutableDictionary *domainFilterIDs;

+ (id)sharedHandler;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)remove;
- (id)currentPolicy;
- (id)createPolicySession;
- (void)removeMainPolicies;
- (void)removePoliciesForSafariTechPreviewApp;
- (void)removePoliciesForSafariAppBundle;
- (BOOL)removePoliciesForMailApp;
- (BOOL)addPolicies;
- (void)removeDomainFilters;
- (BOOL)addPoliciesForSafariTechPreviewApp;
- (BOOL)addPoliciesForSafariAppBundle;
- (BOOL)addPoliciesForMailApp;
- (void)destroyPolicySession;
- (void)removePreferredProxy:(id)a0 apply:(BOOL)a1;
- (void)resetExceptionInterfacePolicy;
- (BOOL)isAppInstalled:(id)a0;
- (id)machOUUIDsForBundleIdentifiers:(id)a0;
- (BOOL)set:(id)a0 flowDivertHandle:(id)a1 ingressProxyURL:(id)a2 ingressFallbackProxyURL:(id)a3 captivePluginBundleIDs:(id)a4;
- (void)addPreferredProxy:(id)a0 agentUUID:(id)a1 withDomainFilter:(id)a2;
- (void)wifiDisabled:(BOOL)a0;
- (void)cellularDisabled:(BOOL)a0;
- (void)interface:(id)a0 disabled:(BOOL)a1;
- (void)replaceDisabledInterfaces:(id)a0;
- (BOOL)addPoliciesForProbing;
- (void)removePoliciesForProbing;
- (void)handleAppInstallation:(id)a0;
- (void)handleAppUninstallation:(id)a0;

@end

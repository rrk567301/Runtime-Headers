@class NSMapTable, WBSPerSitePreference, NSMutableDictionary;

@interface SafariWebGLLoadPolicyController : NSObject {
    NSMutableDictionary *_policies;
    NSMapTable *_browserViewControllerToPageHost;
    BOOL _changingPoliciesPerSitePreventedByAdmin;
    int _userDefaultWebGLLoadPolicy;
    NSMutableDictionary *_domainsToHosts;
}

@property (nonatomic) int defaultWebGLPolicy;
@property (readonly, nonatomic) int hardwareSecurityLevel;
@property (nonatomic) BOOL firstVisitPolicyIsManagedByAdmin;
@property (readonly, nonatomic) WBSPerSitePreference *webGLPreference;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (long long)webGLLoadPolicyForHost:(id)a0;
- (void)browserViewController:(id)a0 didOpenPageRunningWebGLWithHost:(id)a1;
- (BOOL)showWebGLLoadPolicyDialogForURL:(id)a0 inBrowserViewController:(id)a1;
- (void)browserViewController:(id)a0 didLeavePageRunningWebGLWithHost:(id)a1;
- (void)clearWebGLPolicies;
- (void)clearWebGLPoliciesAddedAfterDate:(id)a0;
- (void)reloadWebGLLoadPoliciesIfNeeded;
- (void)removeWebGLLoadPoliciesForHosts:(id)a0;
- (void)saveWebGLLoadPoliciesToUserDefaults;
- (id)sortedPolicies;
- (BOOL)_isSuppressingDialog:(id)a0;
- (void)setWebGLLoadPolicy:(int)a0 forHost:(id)a1 saveToUserDefaults:(BOOL)a2;
- (long long)_managedPolicyToWebGLLoadPolicy:(int)a0;
- (id)_domainFromHost:(id)a0;
- (BOOL)_openPageIsUsingPolicyForHost:(id)a0;
- (void)_loadPoliciesFromUserDefaults:(BOOL)a0;
- (id)policyEntryForHost:(id)a0;
- (void)removeWebGLLoadPolicyForHost:(id)a0;
- (void)resetWebGLLoadPolicies;
- (id)_hostForDomain:(id)a0;

@end

@class NSMutableDictionary, NSMapTable, WBSPasswordWarningTopFraudTargetsManager, NSObject, WBSPasswordBreachHelperProxy, WBSPasswordAuditor, NSString, NSSet, WBSPasswordManagerWebsiteMetadataStore, NSUserDefaults, NSArray, WBSSavedAccountStore, WBSPasswordEvaluator;
@protocol OS_dispatch_queue, WBSHistoricalHighLevelDomainsProvider;

@interface WBSPasswordWarningManager : NSObject <WBSRemotelyUpdatableDataControllerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _passwordEvaluatorLock;
    WBSPasswordEvaluator *_passwordEvaluator;
    WBSSavedAccountStore *_accountStore;
    NSUserDefaults *_userDefaults;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
    WBSPasswordBreachHelperProxy *_passwordBreachHelperProxy;
    id<WBSHistoricalHighLevelDomainsProvider> _historyHighLevelDomainsProvider;
    NSSet *_historyHighLevelDomains;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDataLock;
    BOOL _updateInProgress;
    NSArray *_cachedWarnings;
    NSMapTable *_cachedWarningsForSavedAccounts;
    NSMutableDictionary *_cachedPasswordEvaluations;
    NSMutableDictionary *_inMemoryCachedPasswordEvaluations;
    BOOL _shouldInitializePasswordEvaluationCache;
    WBSPasswordManagerWebsiteMetadataStore *_websiteMetadataStore;
}

@property (readonly, nonatomic) WBSPasswordAuditor *passwordAuditor;
@property (readonly, nonatomic) WBSPasswordEvaluator *passwordEvaluator;
@property (readonly, nonatomic) long long numberOfNonHiddenWarningsWithSpecifiedPriority;
@property (readonly, nonatomic) BOOL hasUnacknowledgedHighPriorityWarnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_scoreWarnings:(id)a0 topFraudTargets:(id)a1;
- (void)acknowledgeHighPriorityWarnings;
- (void)_getBreachResultRecordsForPasswords:(id)a0 startSessionIfNecessary:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)_historyContainsItemForDomain:(id)a0;
- (unsigned long long)_issuesForPassword:(id)a0 withWeakPasswordEvaluation:(id)a1 passwordIsReused:(BOOL)a2 websiteMetadataEntry:(id)a3 breachResultRecord:(id)a4;
- (id)_passwordBreachHelperProxy;
- (long long)_scoreForSavedAccount:(id)a0 issueTypes:(unsigned long long)a1 topFraudTargets:(id)a2;
- (id)_scoredWarningForSavedAccount:(id)a0 topFraudTargets:(id)a1 breachResultRecord:(id)a2;
- (void)_sortWarningsBySeverity:(id)a0 intoHighPriorityBucket:(id)a1 standardPriorityBucket:(id)a2 informationalPriorityBucket:(id)a3 unspecifiedSeverityBucket:(id)a4 savedAccountMap:(id)a5 highPriorityWarningHashes:(id)a6;
- (void)_updateUserDefaultsWithWarningHashes:(id)a0;
- (id)_warningForSavedAccount:(id)a0 breachResultRecord:(id)a1;
- (void)_writePasswordEvaluationsToCache;
- (void)getAllWarningsForcingUpdate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getWarningForSavedAccount:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSavedAccountStore:(id)a0 autoFillQuirksManager:(id)a1 userDefaults:(id)a2 highLevelDomainsProvider:(id)a3;
- (id)initWithSavedAccountStore:(id)a0 autoFillQuirksManager:(id)a1 userDefaults:(id)a2 highLevelDomainsProvider:(id)a3 websiteMetadataStore:(id)a4;
- (void)preWarmWarningsWithCompletionHandler:(id /* block */)a0;
- (void)removeWarningForSavedAccount:(id)a0;
- (BOOL)savedAccountsFromGroup:(id)a0 containsPasswordFromSavedAccount:(id)a1;

@end

@class WBSPasswordAuditor, NSString, WBSPasswordBreachHelperProxy, NSArray, NSMapTable, WBSPasswordWarningTopFraudTargetsManager, WBSPasswordEvaluator, WBSHistory, WBSSavedAccountStore, NSObject, NSUserDefaults, NSMutableSet;
@protocol OS_dispatch_queue;

@interface WBSPasswordWarningManager : NSObject <WBSRemotePlistControllerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    WBSHistory *_historyStore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _passwordEvaluatorLock;
    WBSPasswordEvaluator *_passwordEvaluator;
    WBSSavedAccountStore *_accountStore;
    NSUserDefaults *_userDefaults;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
    WBSPasswordBreachHelperProxy *_passwordBreachHelperProxy;
    NSMutableSet *_historyHighLevelDomains;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDataLock;
    BOOL _updateInProgress;
    NSArray *_cachedWarnings;
    NSMapTable *_cachedWarningsForSavedAccounts;
}

@property (readonly, nonatomic) WBSPasswordAuditor *passwordAuditor;
@property (readonly, nonatomic) WBSPasswordEvaluator *passwordEvaluator;
@property (readonly, nonatomic) long long numberOfWarningsWithSpecifiedPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)getAllWarningsForcingUpdate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_getBreachResultRecordsForPasswords:(id)a0 startSessionIfNecessary:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)_scoredWarningForSavedAccount:(id)a0 topFraudTargets:(id)a1 contextKitCategories:(long long)a2 breachResultRecord:(id)a3;
- (void)_scoreWarnings:(id)a0 contextKitCategoryMap:(id)a1 topFraudTargets:(id)a2;
- (unsigned long long)_issuesForPassword:(id)a0 withWeakPasswordEvaluation:(id)a1 breachResultRecord:(id)a2;
- (id)_warningForSavedAccount:(id)a0 breachResultRecord:(id)a1;
- (long long)_scoreForSavedAccount:(id)a0 issueTypes:(unsigned long long)a1 topFraudTargets:(id)a2 contextKitCategories:(long long)a3;
- (BOOL)_historyContainsItemForDomain:(id)a0;
- (id)_passwordBreachHelperProxy;
- (id)initWithSavedAccountStore:(id)a0 autoFillQuirksManager:(id)a1 userDefaults:(id)a2 history:(id)a3;
- (void)preWarmWarningsWithCompletionHandler:(id /* block */)a0;
- (void)getWarningForSavedAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeWarningForSavedAccount:(id)a0;

@end

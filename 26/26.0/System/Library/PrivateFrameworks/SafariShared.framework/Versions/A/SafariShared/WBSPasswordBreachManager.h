@class WBSPasswordBreachQueuedPasswordBagManager, WBSPasswordBreachContext, WBSPasswordBreachChecker, NSObject, WBSPasswordBreachResults;
@protocol OS_os_transaction, WBSPasswordBreachCredentialSource;

@interface WBSPasswordBreachManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_transaction> *_sessionTransaction;
    WBSPasswordBreachContext *_context;
    id<WBSPasswordBreachCredentialSource> _credentialSource;
    WBSPasswordBreachChecker *_checker;
    WBSPasswordBreachResults *_results;
    WBSPasswordBreachQueuedPasswordBagManager *_bagManager;
}

@property (class, nonatomic, getter=isPasswordBreachDetectionOn) BOOL passwordBreachDetectionOn;

+ (void)_getStandardContextWithCompletionHandler:(id /* block */)a0;
+ (void)getSharedManagerWithCompletionHandler:(id /* block */)a0;
+ (id)testableManagerWithTestCredentialSource:(id)a0 store:(id)a1 configuration:(id)a2;

- (void)addResultRecords:(id)a0;
- (void)clearRecentlyBreachedResultRecords;
- (id)recentlyBreachedResultRecords;
- (id)resultRecordsForQueries:(id)a0;
- (void).cxx_destruct;
- (void)performNextSessionLookupIgnoringMinimumDelay:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_addRecentlyBreachedNotificationIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (BOOL)_canPerformSessionIgnoringMinimumDelay:(BOOL)a0;
- (id)_checker;
- (void)_completeSessionWithResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)_showActiveWarningsIfNecessaryWithInitialBagFillState:(long long)a0 completionHandler:(id /* block */)a1;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)a0;
- (void)getPasswordEvaluationsForPersistentIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContext:(id)a0 credentialSource:(id)a1;
- (id)recentlyBreachedSavedAccounts;
- (void)writePasswordEvaluationsToStore:(id)a0 completionHandler:(id /* block */)a1;

@end

@class NSLock, NSString, EMSearchableIndexQueryExpression, NSError, NSArray, CSSearchQuery, NSProgress, EFPromise, NSObject;
@protocol OS_os_log, OS_os_activity;

@interface EMSearchableIndexQuery : NSObject <EFLoggable, EMSearchableIndexQueryBuilder, EFSignpostable, EFCancelable, NSProgressReporting, EFPubliclyDescribable> {
    NSObject<OS_os_activity> *activity;
}

@property (class, readonly, nonatomic) double intervalForSpotlightFailureSimulation;
@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (copy, nonatomic) NSString *logPrefixString;
@property (copy, nonatomic) NSString *queryStatus;
@property (nonatomic) char queryDidMoveToFinishedState;
@property (nonatomic) char liveQueryDidGather;
@property (retain, nonatomic) CSSearchQuery *query;
@property (retain, nonatomic) EMSearchableIndexQueryExpression *expression;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSProgress *internalProgress;
@property (retain, nonatomic) EFPromise *resultsPromise;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSError *simulatedFailedQueryError;
@property (readonly, nonatomic) char isCancelled;
@property (readonly, nonatomic) char isFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) id /* block */ resultsBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) id /* block */ gatheredBlock;
@property (copy, nonatomic) id /* block */ changedItemsBlock;
@property (copy, nonatomic) id /* block */ foundAttributeResultsBlock;
@property (copy, nonatomic) id /* block */ changedAttributeResultsBlock;
@property (copy, nonatomic) id /* block */ removedItemsBlock;
@property (copy, nonatomic) id /* block */ countChangedBlock;
@property (copy, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *protectionClasses;
@property (copy, nonatomic) NSArray *rankingQueries;
@property (nonatomic) long long maxCount;
@property (nonatomic) char live;
@property (nonatomic) char counting;
@property (nonatomic) char attribute;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long signpostID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

+ (id)queryStringByJoiningQueries:(id)a0 withOperand:(long long)a1;
+ (id)queryWithExpression:(id)a0 builder:(id /* block */)a1;
+ (id)searchWordsForPhrase:(id)a0 languages:(id)a1;
+ (id)_modifierStringFromModifiers:(unsigned long long)a0;
+ (id)_operandStringForOperand:(long long)a0;
+ (id)_queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 phraseMatchFormatString:(id)a3;
+ (id)_queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 phraseMatchFormatString:(id)a3 comparisonOperator:(long long)a4;
+ (id)queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 languages:(id)a3;
+ (id)queryStringForPhrase:(id)a0 attributes:(id)a1 modifiers:(unsigned long long)a2 languages:(id)a3 phraseMatchFormatString:(id)a4 comparisonOperator:(long long)a5;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)_cancel;
- (void)_completed;
- (void)_failedWithError:(id)a0;
- (void)_logSignpostForSearchQueryStart;
- (void)_cancelQuery;
- (void)_changeCount:(long long)a0;
- (void)_changedAttribute:(id)a0 values:(id)a1;
- (void)_changedItems:(id)a0;
- (void)_foundAttribute:(id)a0 values:(id)a1;
- (void)_foundItems:(id)a0;
- (void)_gathered;
- (char)_isCancellationError:(id)a0;
- (char)_isFinishedQueryStatus:(id)a0;
- (void)_logSignpostForSearchQueryDidFinishWithStatus:(id)a0;
- (void)_logSignpostForSearchQueryDidReceiveFirstResultsWithItemCount:(unsigned long long)a0;
- (void)_performClientWork:(id /* block */)a0;
- (void)_removeAllLiveUpdatesBlocks;
- (void)_removeResultsBlock;
- (void)_removedItems:(id)a0;
- (void)_searchQueryDidChangeAttribute:(id)a0 values:(id)a1;
- (void)_searchQueryDidChangeCount:(long long)a0;
- (void)_searchQueryDidChangeItems:(id)a0;
- (void)_searchQueryDidComplete;
- (void)_searchQueryDidFailWithError:(id)a0;
- (void)_searchQueryDidFindAttribute:(id)a0 values:(id)a1;
- (void)_searchQueryDidFindItems:(id)a0;
- (void)_searchQueryDidRemoveIdentifiers:(id)a0;
- (void)_searchQueryGatherDidEnd;
- (id)initWithExpression:(id)a0 builder:(id /* block */)a1;
- (id)initWithExpression:(id)a0 builder:(id /* block */)a1 queryContext:(id)a2 querySetup:(id /* block */)a3;
- (void)simulateFailedQueryWithError:(id)a0;

@end

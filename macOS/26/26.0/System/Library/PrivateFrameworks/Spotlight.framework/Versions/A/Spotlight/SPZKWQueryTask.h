@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SPZKWQueryTask : SPQueryTask

@property (retain) NSObject<OS_dispatch_queue> *queryProcessor;
@property (retain) NSMutableArray *mutableSections;

+ (void)initialize;
+ (int)maxSuggestedApps;

- (void)start;
- (id)initWithQueryContext:(id)a0;
- (void)_updateResultWithState:(unsigned long long)a0 sections:(id)a1;
- (void)endFeedbackWithStartSearchFeedback:(id)a0;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;
- (void)_sendResponseWithKind:(int)a0 sections:(id)a1;
- (void)_sendRankingFeedback;
- (id)startFeedbackWithQueryId:(unsigned long long)a0;
- (BOOL)_isLocked;
- (void)addApplicationResultsFromPredictionResponse:(id)a0 toSection:(id)a1 queryIdent:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)_isInBiometryLockout;

@end

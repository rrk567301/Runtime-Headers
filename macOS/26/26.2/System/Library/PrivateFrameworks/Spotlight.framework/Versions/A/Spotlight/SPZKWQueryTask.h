@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SPZKWQueryTask : SPQueryTask

@property (retain) NSObject<OS_dispatch_queue> *queryProcessor;
@property (retain) NSMutableArray *mutableSections;

+ (void)initialize;
+ (int)maxSuggestedApps;

- (BOOL)_isInBiometryLockout;
- (id)unsafeSessionEntityString;
- (BOOL)_isLocked;
- (id)startFeedbackWithQueryId:(unsigned long long)a0;
- (void)addApplicationResultsFromPredictionResponse:(id)a0 toSection:(id)a1 queryIdent:(unsigned long long)a2;
- (void)_sendResponseWithKind:(int)a0 sections:(id)a1;
- (void).cxx_destruct;
- (void)endFeedbackWithStartSearchFeedback:(id)a0;
- (void)_sendRankingFeedback;
- (void)start;
- (id)initWithQueryContext:(id)a0;
- (id)unsafeSections;
- (void)_updateResultWithState:(unsigned long long)a0 sections:(id)a1;

@end

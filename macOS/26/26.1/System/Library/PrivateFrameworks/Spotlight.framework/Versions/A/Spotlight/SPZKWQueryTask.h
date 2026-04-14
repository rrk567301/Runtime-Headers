@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SPZKWQueryTask : SPQueryTask

@property (retain) NSObject<OS_dispatch_queue> *queryProcessor;
@property (retain) NSMutableArray *mutableSections;

+ (void)initialize;
+ (int)maxSuggestedApps;

- (id)initWithQueryContext:(id)a0;
- (void)start;
- (void)_sendRankingFeedback;
- (id)unsafeSections;
- (void)endFeedbackWithStartSearchFeedback:(id)a0;
- (void)_sendResponseWithKind:(int)a0 sections:(id)a1;
- (void)addApplicationResultsFromPredictionResponse:(id)a0 toSection:(id)a1 queryIdent:(unsigned long long)a2;
- (BOOL)_isLocked;
- (void).cxx_destruct;
- (id)unsafeSessionEntityString;
- (BOOL)_isInBiometryLockout;
- (void)_updateResultWithState:(unsigned long long)a0 sections:(id)a1;
- (id)startFeedbackWithQueryId:(unsigned long long)a0;

@end

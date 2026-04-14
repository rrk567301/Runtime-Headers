@class NSString, PRSRankingItemRanker, NSArray, SFStartLocalSearchFeedback, NSObject, SPSearchQueryContext, NSMutableArray;
@protocol SPKQueryDelegate, OS_os_activity, SFFeedbackListener;

@interface SPKQuery : NSObject {
    NSMutableArray *_childQueries;
    NSObject<OS_os_activity> *_activity;
    int _queryState;
    double _startTime;
}

@property int queryState;
@property (copy) id /* block */ clientResponseHandler;
@property (weak) SPKQuery *parentQuery;
@property (retain) NSString *internalUnmodifiedUserQueryString;
@property (retain) SFStartLocalSearchFeedback *startLocalSearchFeedback;
@property unsigned long long queryOptions;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property unsigned long long querySignpostId;
@property (readonly) unsigned long long queryId;
@property (readonly) unsigned long long queryGroupId;
@property (readonly) NSString *userQueryString;
@property (readonly) NSString *trimmedUserQueryString;
@property (retain) NSString *unmodifiedUserQueryString;
@property (nonatomic) BOOL wantsSuggestions;
@property (weak, nonatomic) NSObject<SPKQueryDelegate> *delegate;
@property (readonly) id /* block */ responseHandler;
@property (readonly) PRSRankingItemRanker *ranker;
@property (readonly) NSArray *childQueries;
@property double queryStartTime;
@property (readonly) SPSearchQueryContext *queryContext;
@property (retain, nonatomic) NSObject *logOwner;
@property (nonatomic) unsigned long long logToken;
@property (readonly, getter=isParsecQuery) BOOL parsecQuery;
@property (readonly, getter=isURLQuery) BOOL urlQuery;
@property (readonly, getter=isDocumentQuery) BOOL documentQuery;
@property (readonly, getter=isApplicationQuery) BOOL applicationQuery;
@property (readonly, getter=isCalculatorQuery) BOOL calculatorQuery;
@property (readonly, getter=isDictionaryQuery) BOOL dictionaryQuery;
@property (readonly, getter=isExtensionQuery) BOOL extensionQuery;
@property (readonly, getter=isCoreSpotlightQuery) BOOL coreSpotlightQuery;
@property (readonly) BOOL supportsRefinement;

+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (unsigned int)searchDomain;
+ (int)sourceKind;

- (BOOL)isStarted;
- (BOOL)isCompleted;
- (void)setRankingQueries:(id)a0;
- (id)createActivity;
- (BOOL)isFinished;
- (void)_cancel;
- (id)activity;
- (void)cancel;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (void)start;
- (id)description;
- (void)_start;
- (BOOL)needsIO;
- (BOOL)completedGather;
- (void)beginQuerySignpostInterval;
- (void)endQuerySignpostInterval;
- (id)getQueryRankingConfigurationWithRanker:(id)a0 spotlightQuery:(id)a1 queryContext:(id)a2;
- (id)initWithUserQuery:(id)a0;
- (id)initWithUserQuery:(id)a0 options:(unsigned long long)a1;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (void)queryResponseReceivedSignpostEvent:(id)a0;
- (BOOL)sendEmptyResponseIfNecessary;
- (BOOL)shouldReturnEarly;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1;
- (void)_logQueryState;
- (void)addChildQuery:(id)a0;
- (void)sendEndLocalSearchFeedback;
- (void)sendStartLocalSearchFeedback;

@end

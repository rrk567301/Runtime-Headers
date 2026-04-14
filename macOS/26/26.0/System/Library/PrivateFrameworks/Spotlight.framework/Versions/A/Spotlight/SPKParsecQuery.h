@class NSObject;
@protocol OS_dispatch_queue;

@interface SPKParsecQuery : SPKQuery {
    NSObject<OS_dispatch_queue> *_queue;
    double _startTime;
    double _endTime;
}

@property long long queryTaskId;
@property double timeout;

+ (double)scaleFactor;
+ (double)searchRenderTimeout;
+ (void)initialize;
+ (BOOL)isSiri;
+ (void)deactivate;
+ (void)activate;
+ (id)fteExplanationText;
+ (id)fteLearnMore;
+ (id)fteSupportedDomains;
+ (void)getFTEParameters;
+ (BOOL)isEffectsViewEnabled;
+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (unsigned int)searchDomain;
+ (void)setIsEffectsViewEnabled:(BOOL)a0;
+ (void)setParsecAllowed:(BOOL)a0;
+ (void)shouldSetClientAsSiri:(BOOL)a0;

- (void)start;
- (void)dealloc;
- (void)cancel;
- (void)setRankingQueries:(id)a0;
- (void).cxx_destruct;
- (id)_rerankMapsResultsWithLocalSignals:(id)a0 forQueryId:(long long)a1 withMapsParsecRanker:(id)a2;
- (id)categoryForResult:(id)a0;
- (id)groupNameForResult:(id)a0;
- (id)initWithUserQuery:(id)a0 options:(unsigned long long)a1;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (BOOL)isParsecQuery;
- (long long)matchQualityForAttribute:(id)a0 queryString:(id)a1;
- (void)queryDidFinish:(long long)a0 fbq:(id)a1 sections:(id)a2 category_stats:(id)a3 parsecCategoryOrder:(id)a4 suggestions:(id)a5 corrections:(id)a6 suggestionsAreBlended:(BOOL)a7 serverRelevanceScores:(id)a8 serverRelevanceScoreThreshold:(float)a9 engagementSignal:(id)a10;
- (BOOL)shouldReturnEarly;
- (BOOL)supportsRefinement;
- (BOOL)vetURLForResult:(id)a0;

@end

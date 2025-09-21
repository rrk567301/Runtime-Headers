@class NSObject;
@protocol OS_dispatch_queue;

@interface SPKParsecQuery : SPKQuery {
    NSObject<OS_dispatch_queue> *_queue;
    double _startTime;
    double _endTime;
}

@property long long queryTaskId;
@property double timeout;

+ (void)initialize;
+ (void)activate;
+ (void)deactivate;
+ (double)scaleFactor;
+ (char)isParsecEnabled;
+ (id)fteExplanationText;
+ (id)fteLearnMore;
+ (id)fteSupportedDomains;
+ (void)getFTEParameters;
+ (char)isEffectsViewEnabled;
+ (char)isQuerySupported:(unsigned long long)a0;
+ (char)isSiri;
+ (void)parsecEnabled:(char)a0;
+ (unsigned int)searchDomain;
+ (double)searchRenderTimeout;
+ (void)setIsEffectsViewEnabled:(char)a0;
+ (void)shouldSetClientAsSiri:(char)a0;
+ (char)showedFTE;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)setRankingQueries:(id)a0;
- (id)_rerankMapsResultsWithLocalSignals:(id)a0 forQueryId:(long long)a1 withMapsParsecRanker:(id)a2;
- (id)categoryForResult:(id)a0;
- (id)groupNameForResult:(id)a0;
- (id)initWithUserQuery:(id)a0 options:(unsigned long long)a1;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (char)isParsecQuery;
- (long long)matchQualityForAttribute:(id)a0 queryString:(id)a1;
- (void)queryDidFinish:(long long)a0 fbq:(id)a1 sections:(id)a2 category_stats:(id)a3 parsecCategoryOrder:(id)a4 suggestions:(id)a5 corrections:(id)a6 suggestionsAreBlended:(char)a7 serverRelevanceScores:(id)a8 serverRelevanceScoreThreshold:(float)a9 engagementSignal:(id)a10;
- (char)shouldReturnEarly;
- (char)supportsRefinement;
- (char)vetURLForResult:(id)a0;

@end

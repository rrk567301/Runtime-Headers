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
+ (BOOL)isSiri;
+ (unsigned int)searchDomain;
+ (BOOL)isEffectsViewEnabled;
+ (void)setIsEffectsViewEnabled:(BOOL)a0;
+ (void)shouldSetClientAsSiri:(BOOL)a0;
+ (void)getFTEParameters;
+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (BOOL)isParsecEnabled;
+ (void)parsecEnabled:(BOOL)a0;
+ (BOOL)showedFTE;
+ (id)fteSupportedDomains;
+ (id)fteLearnMore;
+ (id)fteExplanationText;
+ (double)searchRenderTimeout;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)setRankingQueries:(id)a0;
- (id)initWithUserQuery:(id)a0 queryGroupId:(unsigned long long)a1 options:(unsigned long long)a2 queryContext:(id)a3;
- (BOOL)shouldReturnEarly;
- (id)initWithUserQuery:(id)a0 options:(unsigned long long)a1;
- (void)queryDidFinish:(long long)a0 fbq:(id)a1 sections:(id)a2 category_stats:(id)a3 parsecCategoryOrder:(id)a4 suggestions:(id)a5 corrections:(id)a6 suggestionsAreBlended:(BOOL)a7;
- (BOOL)isParsecQuery;
- (BOOL)supportsRefinement;
- (BOOL)vetURLForResult:(id)a0;
- (id)categoryForResult:(id)a0;
- (id)groupNameForResult:(id)a0;
- (long long)matchQualityForAttribute:(id)a0 queryString:(id)a1;

@end

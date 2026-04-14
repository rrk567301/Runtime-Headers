@class CSFilesSearchQuery, NSArray, NSString;

@interface SPGoToFilesQuery : SPKQuery

@property (retain, nonatomic) CSFilesSearchQuery *query;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSString *folderScope;

+ (BOOL)onlyShowIndexedFiles;
+ (unsigned int)searchDomain;
+ (BOOL)shouldUseGoToQuery;
+ (int)sourceKind;

- (id)createActivity;
- (void).cxx_destruct;
- (void)_start;
- (BOOL)isDocumentQuery;
- (void)beginQuerySignpostInterval;
- (id)buildResultSectionWithCardSections:(id)a0 queryId:(unsigned long long)a1 completion:(id)a2;
- (void)decomposeSearchStringFromQueryContext:(id)a0;
- (void)endQuerySignpostInterval;
- (double)fuzzyScoreForItem:(id)a0 input:(id)a1;
- (BOOL)isCoreSpotlightQuery;
- (void)queryFiles;
- (void)queryResponseReceivedSignpostEvent:(id)a0;
- (id)resultForURL:(id)a0 displayName:(id)a1;
- (id)resultsFromPath:(id)a0;
- (void)sendResponse;
- (BOOL)shouldReturnEarly;

@end

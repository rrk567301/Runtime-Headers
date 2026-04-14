@class NSArray, NSDictionary, NSString, NSError, PRSRankingConfiguration;

@interface SPKResponse : NSObject

@property (retain) PRSRankingConfiguration *rankingConfiguration;
@property (readonly) int kind;
@property (readonly) int sourceKind;
@property (readonly) unsigned long long queryId;
@property (readonly) NSError *error;
@property (readonly) NSArray *sections;
@property (readonly) NSDictionary *groupedResults;
@property (readonly) NSArray *supportedFilters;
@property BOOL topHitIsIn;
@property BOOL noChangeInResultsSinceLastResponse;
@property BOOL parsecFinished;
@property BOOL metadataFinished;
@property BOOL corespotlightFinished;
@property (retain) NSString *fbq;
@property BOOL queryResponseComplete;
@property (retain) NSString *userQueryString;
@property BOOL isRewrite;
@property BOOL didReceiveLaterThanRenderTimeout;
@property (retain) NSString *correctedQuery;
@property BOOL suggestionsAreBlended;
@property (retain) NSArray *serverSuggestionResults;
@property (retain) NSArray *localSuggestionResults;
@property (readonly) NSArray *added;
@property (readonly) NSArray *changed;
@property (readonly) NSArray *removed;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueryID:(unsigned long long)a0 kind:(int)a1 sourceKind:(int)a2 sections:(id)a3;
- (id)initWithQueryID:(unsigned long long)a0 kind:(int)a1 sourceKind:(int)a2 sections:(id)a3 groupedResults:(id)a4 supportedFilters:(id)a5 error:(id)a6;
- (id)initWithQueryID:(unsigned long long)a0 kind:(int)a1 sourceKind:(int)a2 sections:(id)a3 supportedFilters:(id)a4;
- (id)initWithQueryID:(unsigned long long)a0 sourceKind:(int)a1 error:(id)a2;
- (id)initWithQueryID:(unsigned long long)a0 sourceKind:(int)a1 sections:(id)a2;
- (id)initWithQueryID:(unsigned long long)a0 kind:(int)a1 sourceKind:(int)a2 sections:(id)a3 groupedResults:(id)a4;
- (id)initWithQueryID:(unsigned long long)a0 kind:(int)a1 sourceKind:(int)a2 sections:(id)a3 groupedResults:(id)a4 error:(id)a5;

@end

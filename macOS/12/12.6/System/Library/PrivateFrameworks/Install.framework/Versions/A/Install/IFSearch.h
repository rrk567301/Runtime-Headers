@class NSString, NSMutableArray, NSArray;

@interface IFSearch : NSObject {
    NSString *_identifier;
    NSMutableArray *_childSearches;
    NSArray *_results;
    double _searchTime;
    BOOL _resultsRetrieved;
}

+ (id)searchWithXMLElement:(id)a0;
+ (id)searchWithTokenDefinitions:(id)a0 forTokenID:(id)a1;
+ (BOOL)backupContainsResult:(struct __CFString { } *)a0;

- (void)dealloc;
- (id)identifier;
- (id)initWithIdentifier:(id)a0;
- (id)results;
- (void)setIdentifier:(id)a0;
- (double)searchTime;
- (void)setSearchTime:(double)a0;
- (id)searchResultsForContext:(id)a0 inDomainPath:(id)a1;
- (id)initWithXMLElement:(id)a0;
- (BOOL)resultsRetrieved;
- (id)childSearches;
- (void)addChildSearch:(id)a0;
- (void)setResultsRetrieved:(BOOL)a0;

@end

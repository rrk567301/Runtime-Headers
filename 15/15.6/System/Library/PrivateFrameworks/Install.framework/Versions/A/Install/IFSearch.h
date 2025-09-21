@class NSString, NSMutableArray, NSArray;

@interface IFSearch : NSObject {
    NSString *_identifier;
    NSMutableArray *_childSearches;
    NSArray *_results;
    double _searchTime;
    char _resultsRetrieved;
}

+ (char)backupContainsResult:(struct __CFString { } *)a0;
+ (id)searchWithTokenDefinitions:(id)a0 forTokenID:(id)a1;
+ (id)searchWithXMLElement:(id)a0;

- (void)dealloc;
- (id)identifier;
- (id)results;
- (id)initWithIdentifier:(id)a0;
- (void)setIdentifier:(id)a0;
- (double)searchTime;
- (void)setSearchTime:(double)a0;
- (void)addChildSearch:(id)a0;
- (id)childSearches;
- (id)initWithXMLElement:(id)a0;
- (char)resultsRetrieved;
- (id)searchResultsForContext:(id)a0 inDomainPath:(id)a1;
- (void)setResultsRetrieved:(char)a0;

@end

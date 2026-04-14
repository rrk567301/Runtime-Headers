@class WBSSearchParameters, NSArray;

@interface _WBSSearchParametersContext : NSObject

@property (retain, nonatomic) WBSSearchParameters *searchParameters;
@property (copy, nonatomic) NSArray *topHits;
@property (copy, nonatomic) NSArray *historyAndBookmarkMatches;

- (id)init;
- (void).cxx_destruct;
- (void)clearResults;

@end

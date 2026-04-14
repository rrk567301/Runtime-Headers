@class NSArray, WBSTrialSearchParameters;

@interface _WBSTrialSearchParametersContext : NSObject

@property (retain, nonatomic) WBSTrialSearchParameters *searchParameters;
@property (copy, nonatomic) NSArray *topHits;
@property (copy, nonatomic) NSArray *historyAndBookmarkMatches;

- (id)init;
- (void)clearResults;
- (void).cxx_destruct;

@end

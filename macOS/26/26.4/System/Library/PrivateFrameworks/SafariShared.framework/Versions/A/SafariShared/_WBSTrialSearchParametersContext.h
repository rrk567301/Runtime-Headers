@class NSArray, WBSTrialSearchParameters;

@interface _WBSTrialSearchParametersContext : NSObject

@property (retain, nonatomic) WBSTrialSearchParameters *searchParameters;
@property (copy, nonatomic) NSArray *topHits;
@property (copy, nonatomic) NSArray *historyAndBookmarkMatches;

- (void)clearResults;
- (void).cxx_destruct;
- (id)init;

@end

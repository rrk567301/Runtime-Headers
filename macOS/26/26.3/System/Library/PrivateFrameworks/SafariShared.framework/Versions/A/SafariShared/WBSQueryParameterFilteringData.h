@class NSMutableOrderedSet;

@interface WBSQueryParameterFilteringData : NSObject {
    NSMutableOrderedSet *_originalAndAdjustedURLs;
}

@property (readonly, nonatomic) long long numberOfFilteredQueryParameters;

- (id)init;
- (void)addData:(id)a0;
- (void).cxx_destruct;
- (void)addAdjustedURL:(id)a0 originalURL:(id)a1;

@end

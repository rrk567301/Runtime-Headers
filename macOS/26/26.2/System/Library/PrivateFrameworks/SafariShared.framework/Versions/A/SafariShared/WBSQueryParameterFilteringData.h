@class NSMutableOrderedSet;

@interface WBSQueryParameterFilteringData : NSObject {
    NSMutableOrderedSet *_originalAndAdjustedURLs;
}

@property (readonly, nonatomic) long long numberOfFilteredQueryParameters;

- (void).cxx_destruct;
- (void)addData:(id)a0;
- (id)init;
- (void)addAdjustedURL:(id)a0 originalURL:(id)a1;

@end

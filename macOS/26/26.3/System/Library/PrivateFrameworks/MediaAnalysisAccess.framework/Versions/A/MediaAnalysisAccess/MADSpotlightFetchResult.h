@class NSArray, NSMutableArray;

@interface MADSpotlightFetchResult : NSObject {
    NSMutableArray *_sandboxHandles;
}

@property (readonly, nonatomic) NSArray *searchableItems;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSearchableItems:(id)a0 sandboxTokens:(id)a1;

@end

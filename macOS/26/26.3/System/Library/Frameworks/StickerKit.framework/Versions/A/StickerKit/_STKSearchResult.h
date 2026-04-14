@class STKStickerSearchQuery, NSArray;

@interface _STKSearchResult : NSObject {
    void /* function */ results;
}

@property (nonatomic, readonly) STKStickerSearchQuery *originalQuery;
@property (nonatomic, readonly) NSArray *results;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOriginalQuery:(id)a0 results:(id)a1;

@end

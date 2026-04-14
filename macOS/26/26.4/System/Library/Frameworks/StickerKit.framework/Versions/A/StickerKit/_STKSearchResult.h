@class STKStickerSearchQuery, NSArray;

@interface _STKSearchResult : NSObject {
    void /* function */ results;
}

@property (nonatomic, readonly) STKStickerSearchQuery *originalQuery;
@property (nonatomic, readonly) NSArray *results;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOriginalQuery:(id)a0 results:(id)a1;

@end

@class NSArray;

@interface FPModifyFavoritesOperation : FPTransformOperation {
    NSArray *_ranks;
    char _isUnfavorite;
}

- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)a0 favoriteRanks:(id)a1 isUnfavorite:(char)a2;
- (id)initWithItemsToFavorite:(id)a0 favoriteRanks:(id)a1;
- (id)initWithItemsToUnfavorite:(id)a0;
- (id)replicateForItems:(id)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;

@end

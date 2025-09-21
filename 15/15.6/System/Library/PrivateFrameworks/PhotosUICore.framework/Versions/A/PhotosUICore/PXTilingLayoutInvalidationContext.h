@class NSIndexSet, NSString, NSMutableIndexSet, NSMutableArray;

@interface PXTilingLayoutInvalidationContext : NSObject {
    NSMutableArray *_invalidatedTileIdentifiers;
    NSMutableIndexSet *_invalidatedTileGroups;
}

@property (readonly, nonatomic) NSIndexSet *invalidatedTileGroups;
@property (readonly, nonatomic) char invalidatedAllTiles;
@property (readonly, nonatomic) char invalidatedContentBounds;
@property (readonly, nonatomic) char invalidatedScrollBounds;
@property (readonly, nonatomic) char invalidatedVisibleRect;
@property (readonly, nonatomic) char invalidatedScrollInfo;
@property (copy, nonatomic) NSString *tag;

- (id)description;
- (void).cxx_destruct;
- (void)invalidateEverything;
- (void)enumerateInvalidatedTileIdentifiersUsingBlock:(id /* block */)a0;
- (void)invalidateAllTiles;
- (void)invalidateContentBounds;
- (void)invalidateScrollBounds;
- (void)invalidateScrollInfo;
- (void)invalidateTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (void)invalidateTilesInGroup:(unsigned long long)a0;
- (void)invalidateVisibleRect;

@end

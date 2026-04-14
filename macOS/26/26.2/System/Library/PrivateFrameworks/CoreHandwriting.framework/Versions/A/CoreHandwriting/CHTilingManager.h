@protocol CHStrokeProvider;

@interface CHTilingManager : NSObject {
    long long _documentTileWidth;
    long long _documentTileHeight;
    long long _documentTilingTileHorizontalOverlap;
    long long _documentTilingTileVerticalOverlap;
    long long _documentTilingTileHorizontalContextOverlap;
    long long _documentTilingTileVerticalContextOverlap;
}

@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;

- (void).cxx_destruct;
- (void)_addStrokeIdentifier:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intoTile:(id)a2 strokeType:(long long)a3 mutableDocumentTilesPerPosition:(id)a4 skipMainTile:(BOOL)a5;
- (void)_assignStrokeWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContentTile:(id *)a1 overlapTiles:(id *)a2 contextTiles:(id *)a3;
- (void)_estimateScaleOfTiles:(id)a0 mutableDocumentTilesPerPosition:(id)a1 strokeBoundsPerStrokeIdentifier:(id)a2 defaultTileSizeFactor:(double)a3;
- (void)_removeStrokeIdentifier:(id)a0 fromTile:(id)a1 mutableDocumentTilesPerPosition:(id)a2;
- (void)_removeSubtilesFromTile:(id)a0 mutableDocumentTilesPerPosition:(id)a1;
- (void)_splitTilesIntoSubtiles:(id)a0 mutableDocumentTilesPerPosition:(id)a1 maxTileSize:(long long)a2 strokeBoundsPerStrokeIdentifier:(id)a3;
- (id)_tileAtPosition:(id)a0 fromTilesPerPosition:(id)a1;
- (void)_updateTileBounds:(id)a0;
- (id)initWithStrokeProvider:(id)a0;
- (id)updatedTilingResult:(id)a0 addingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 allStrokes:(id)a3 strokeBoundsPerStrokeIdentifier:(id)a4 maxTileSize:(long long)a5;

@end

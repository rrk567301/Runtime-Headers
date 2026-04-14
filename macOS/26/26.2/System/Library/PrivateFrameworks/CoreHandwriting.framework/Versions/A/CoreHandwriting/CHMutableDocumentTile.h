@class NSMutableArray, NSMutableSet;

@interface CHMutableDocumentTile : CHDocumentTile {
    NSMutableArray *_subtilePositions;
    NSMutableArray *_orderedStrokeIdentifiers;
    NSMutableSet *_contentStrokeIdentifiers;
    NSMutableSet *_overlapStrokeIdentifiers;
    NSMutableSet *_contextStrokeIdentifiers;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentArea;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overlapArea;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contextArea;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)discardSubtiles;
- (void)addContentStroke:(id)a0;
- (void)addContextStroke:(id)a0;
- (void)addOverlapStroke:(id)a0;
- (void)addSubtilePosition:(id)a0;
- (id)contentStrokeIdentifiers;
- (id)contextStrokeIdentifiers;
- (void)estimateScaleUsingStrokeBounds:(id)a0 defaultTileSizeFactor:(double)a1;
- (id)initWithTilePosition:(id)a0 scale:(double)a1;
- (id)initWithTilePosition:(id)a0 subtilePositions:(id)a1 scale:(double)a2 origin:(struct CGPoint { double x0; double x1; })a3 orderedStrokeIdentifiers:(id)a4 contentStrokeIdentifiers:(id)a5 overlapStrokeIdentifiers:(id)a6 contextStrokeIdentifiers:(id)a7;
- (id)orderedStrokeIdentifiers;
- (id)overlapStrokeIdentifiers;
- (void)removeStroke:(id)a0;
- (id)subtilePositions;

@end

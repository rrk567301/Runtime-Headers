@interface PXHorizontalFeedLayoutGenerator : PXFeedLayoutGenerator {
    struct CGPoint { double x; double y; } _origin;
}

@property (nonatomic) double referenceHeight;

- (char)_scanNonPanoramaSequence:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 count:(long long)a1;
- (char)_addColumnWithContiguousTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 count:(long long)a1;
- (char)_addColumnWithTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 imageFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(long long)a2;
- (char)_addSpecialSequenceBlock:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 count:(long long)a1 useMagneticGuidelines:(char)a2 block:(id /* block */)a3;
- (char)_hasLeftSuboptimalColumn;
- (char)_isAtEndOfColumn;
- (char)_parseSingleTile;
- (char)_parseSpecialSequence;
- (char)_parseSpecialSubsequenceWithColumnRequired:(char)a0 columnParsed:(char *)a1;
- (char)_parseSpecialTileTriplet;
- (char)_parseTilePair;
- (char)_parseTileTriplet;
- (char)_scanSpecialSequenceBlock:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)_scanSpecialSequenceColumn:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 count:(long long *)a1;
- (char)_scanTripletWithLargeLead:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (void)willParseTiles;

@end

@interface PXVerticalFeedLayoutGenerator : PXFeedLayoutGenerator {
    struct CGPoint { double x; double y; } _origin;
    struct PXTileInfo { long long index; struct CGSize { double width; double height; } imageSize; struct CGSize { double width; double height; } minimumSize; char hasCaption; char hasLikes; long long commentCount; char isBatchStart; } _enqueuedCaptionTileInfo;
    struct PXTileInfo { long long index; struct CGSize { double width; double height; } imageSize; struct CGSize { double width; double height; } minimumSize; char hasCaption; char hasLikes; long long commentCount; char isBatchStart; } _enqueuedLikesTileInfo;
    struct PXTileInfo { long long index; struct CGSize { double width; double height; } imageSize; struct CGSize { double width; double height; } minimumSize; char hasCaption; char hasLikes; long long commentCount; char isBatchStart; } _enqueuedCommentsTileInfo;
}

@property (nonatomic) double referenceWidth;
@property (nonatomic) char shouldDisplayCaptionsBelowBatches;

- (char)_dequeueCaption;
- (char)_scanNonPanoramaSequence:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 count:(long long)a1;
- (char)_addRowWithContiguousTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 count:(long long)a1;
- (char)_addRowWithTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 imageFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 count:(long long)a2;
- (char)_addSpecialSequenceBlock:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)_dequeueComments;
- (char)_dequeueLikes;
- (void)_enqueueCaptionWithTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; })a0;
- (void)_enqueueCommentsWithTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; })a0;
- (void)_enqueueLikesWithTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; })a0;
- (void)_enumerateRowFramesWithContiguousTiles:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 count:(long long)a1 useMagneticGuidelines:(char)a2 block:(id /* block */)a3;
- (char)_hasEnqueuedCaption;
- (char)_hasEnqueuedComments;
- (char)_hasEnqueuedLikes;
- (char)_hasLeftSuboptimalRow;
- (char)_isAtEndOfRow;
- (char)_parseSingleTile;
- (char)_parseSpecialSequence;
- (char)_parseSpecialSubsequenceWithRowRequired:(char)a0 rowParsed:(char *)a1;
- (char)_parseSpecialTileTriplet;
- (char)_parseTilePair;
- (char)_parseTileRequiringFullWidth;
- (char)_parseTileTriplet;
- (char)_scanSpecialSequenceBlock:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)_scanSpecialSequenceRow:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 count:(long long *)a1;
- (char)_scanTilePair:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)_scanTileRequiringFullWidth:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)_scanTileRequiringNewRow:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)_scanTileTriplet:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)_scanTripletWithLargeLead:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)_scanTripletWithRearrangment:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (void)_willAddCaptionRowWithFirstTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; })a0;
- (void)_willAddCommentRowsWithFirstTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; })a0;
- (void)_willAddLikeRowWithFirstTileInfo:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; })a0;
- (void)didParseTiles;
- (char)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (void)willParseTiles;

@end

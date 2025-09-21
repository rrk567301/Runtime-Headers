@class PXFeedLayoutGeneratorScanState;

@interface PXFeedLayoutGenerator : NSObject {
    long long _cacheTailLocation;
    long long _cacheHeadLocation;
    struct PXTileInfo { long long index; struct CGSize { double width; double height; } imageSize; struct CGSize { double width; double height; } minimumSize; char hasCaption; char hasLikes; long long commentCount; char isBatchStart; } _cachedTileInfo[20];
    id _cachedBatchID[20];
}

@property (copy, nonatomic) id /* block */ parsedFrameBlock;
@property (nonatomic) PXFeedLayoutGeneratorScanState *scanState;
@property (nonatomic) long long scanLocation;
@property (retain, nonatomic) id scannedBatchID;
@property (nonatomic) char scannedBatchHasCaption;
@property (nonatomic) long long scanSpecialSequenceCount;
@property (readonly, nonatomic) char isAtEnd;
@property (nonatomic) char shouldStop;
@property (nonatomic) long long tileCount;
@property (nonatomic) struct CGSize { double width; double height; } interTileSpacing;
@property (copy, nonatomic) id /* block */ tileImageSizeBlock;
@property (copy, nonatomic) id /* block */ tileMinimumSizeBlock;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } captionPadding;
@property (nonatomic) struct CGSize { double width; double height; } noCaptionSpacing;
@property (copy, nonatomic) id /* block */ tileHasCaptionBlock;
@property (copy, nonatomic) id /* block */ tileCaptionSizeBlock;
@property (copy, nonatomic) id /* block */ tileHasLikesBlock;
@property (copy, nonatomic) id /* block */ tileLikesSizeBlock;
@property (copy, nonatomic) id /* block */ tileCommentCountBlock;
@property (copy, nonatomic) id /* block */ tileCommentSizeBlock;
@property (copy, nonatomic) id /* block */ tileBatchIDBlock;
@property (nonatomic) long long numberOfMagneticGuidelines;
@property (nonatomic) double roundingScale;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateFramesWithBlock:(id /* block */)a0;
- (char)scanTileWithHorizontalPanorama:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (struct CGSize { double x0; double x1; })captionSizeForTileAtIndex:(long long)a0 proposedSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })commentSizeForTileAtIndex:(long long)a0 commentIndex:(long long)a1 proposedSize:(struct CGSize { double x0; double x1; })a2;
- (void)didParseTiles;
- (struct CGSize { double x0; double x1; })likesSizeForTileAtIndex:(long long)a0 proposedSize:(struct CGSize { double x0; double x1; })a1;
- (char)parseNextTiles;
- (void)parseTiles;
- (void)parsedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 forCommentAtIndex:(long long)a2;
- (void)parsedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 forLikesAtIndex:(long long)a2;
- (void)parsedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1 forTileAtIndex:(long long)a2;
- (char)scanAnyTile:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)scanTile:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 ofType:(long long)a1;
- (char)scanTile:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 passingTest:(id /* block */)a1;
- (char)scanTile:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0 type:(long long *)a1;
- (char)scanTileWithLandscapeImage:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)scanTileWithPortraitImage:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (char)scanTileWithSquareImage:(struct PXTileInfo { long long x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; char x3; char x4; long long x5; char x6; } *)a0;
- (double)valueByRounding:(double)a0 usingMagneticGuidelines:(char)a1;
- (void)willParseTiles;

@end

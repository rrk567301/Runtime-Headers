@class TSDInfoGeometry, NSMutableDictionary, TSUPointerKeyDictionary, TSTTableInfo, TSTLayout;

@interface TSTTablePartitioner : NSObject <TSDPartitioner>

@property (weak, nonatomic) TSTTableInfo *tableInfo;
@property (copy, nonatomic) TSDInfoGeometry *infoGeometry;
@property (retain, nonatomic) TSTLayout *scaledLayout;
@property (nonatomic) char tableIsLTR;
@property (nonatomic) char layoutIsLTR;
@property (nonatomic) double firstPartitionWidth;
@property (retain, nonatomic) TSUPointerKeyDictionary *hintMatricesByCanvas;
@property (retain, nonatomic) NSMutableDictionary *partitioningPassCache;
@property (readonly, nonatomic) double inlineTableWidth;
@property (nonatomic) struct CGSize { double width; double height; } scaleToFit;
@property (readonly, nonatomic) char scaleIsValid;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } totalPartitionFrame;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (id)hintCacheKeyForHint:(id)a0;
- (id)hintCacheKeyForPartitioningPass:(id)a0 andHintID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a1;
- (id)hintForLayout:(id)a0;
- (id)layoutForHint:(id)a0 parentLayout:(id)a1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })measureCellRangeForNextPartitionOfSize:(struct CGSize { double x0; double x1; })a0 previousHint:(id)a1 horizontally:(char)a2;
- (id)nextHintForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(char)a3 outFinished:(out char *)a4;
- (id)nextLayoutForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(char)a3 outFinished:(out char *)a4;
- (char)p_didFinishPartitioningHint:(id)a0 horizontally:(char)a1;
- (void)p_flushCacheAfterPartitioningFinished:(id)a0 lastHint:(id)a1 horizontally:(char)a2;
- (id)partitioningPassForFirstPartitionSize:(struct CGSize { double x0; double x1; })a0;
- (id)partitioningPassForHint:(id)a0 withPreviousHint:(id)a1;
- (char)shouldReuseLayout:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 parentLayout:(id)a2 hint:(id)a3;
- (void)validateScaledLayout;
- (void)setLayoutPartititionsRightToLeft:(char)a0 contentPartitionsRightToLeft:(char)a1;
- (char)didHint:(id)a0 syncWithNextHint:(id)a1 horizontally:(char)a2;
- (void)resetScaleToFit;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })calculateCellRangeForNextPartition:(unsigned short)a0 nextPartitionRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a1 additionalHeightForCaption:(double)a2 availableSizeRemaining:(struct CGSize { double x0; double x1; })a3 previousHint:(id)a4;

@end

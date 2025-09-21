@interface TSTTableRepProcessChangesActions : NSObject {
    struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *__value_; } __end_cap_; } _dirtyCellRanges;
}

@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } dirtyStrokeRange;
@property (nonatomic) char invalidateAllChrome;
@property (nonatomic) char invalidateAllChromeCaches;
@property (nonatomic) char invalidateColumnChrome;
@property (nonatomic) char invalidateRowChrome;
@property (nonatomic) char hideChromeContextMenuButton;
@property (nonatomic) char invalidateKnobs;
@property (nonatomic) char invalidateSelection;
@property (nonatomic) char invalidateTableName;
@property (nonatomic) char updateEditorRemainders;
@property (nonatomic) char syncReferenceHighlightState;
@property (nonatomic) char setNeedsDisplay;
@property (nonatomic) char hideStepperHUD;
@property (nonatomic) char expandDirtyRegionForReferences;
@property (nonatomic) char repositionStockPopover;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setDirtyCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void *)dirtyCellRanges;

@end

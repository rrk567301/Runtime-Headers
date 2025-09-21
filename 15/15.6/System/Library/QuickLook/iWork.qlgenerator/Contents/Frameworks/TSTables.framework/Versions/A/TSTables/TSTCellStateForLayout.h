@class TSTTextStyleHandle, TSTLayoutContentCachedKey, TSWPColumn, TSTCell;

@interface TSTCellStateForLayout : NSObject <NSCopying>

@property (nonatomic) char hasContent;
@property (nonatomic) char hasContentIsCached;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } modelCellID;
@property (copy, nonatomic) TSTCell *cell;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } layoutMergeRange;
@property (retain, nonatomic) id cellContents;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) double maxWidthForChildren;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } paddingInsets;
@property (nonatomic) int verticalAlignment;
@property (retain, nonatomic) TSTTextStyleHandle *textStyleHandle;
@property (nonatomic) char cellPropsRowHeight;
@property (nonatomic) char cellWraps;
@property (nonatomic) char needWPColumn;
@property (nonatomic) char shouldFastPathMeasureFitWidth;
@property (nonatomic) char forDrawing;
@property (nonatomic) char inDynamicLayout;
@property (nonatomic) int layoutCacheFlags;
@property (nonatomic) struct CGSize { double width; double height; } sizeOfText;
@property (retain, nonatomic) TSTLayoutContentCachedKey *keyVal;
@property (retain, nonatomic) TSWPColumn *wpColumn;
@property (nonatomic) unsigned long long pageNumber;
@property (nonatomic) unsigned long long pageCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)p_generateCellContentsAndReturnContents:(char)a0;

@end

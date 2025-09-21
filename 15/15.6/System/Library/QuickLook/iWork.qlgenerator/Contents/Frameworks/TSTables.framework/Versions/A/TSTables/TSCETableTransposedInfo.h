@interface TSCETableTransposedInfo : NSObject

@property (nonatomic) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } _bottomRight; } transposedBodyRange;
@property (nonatomic) unsigned int numberOfFooterRows;

@end

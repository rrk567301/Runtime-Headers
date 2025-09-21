@class TSCHChartDrawableInfo;

@interface TNChartSelection : TSDDrawableSelection

@property (readonly, nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } _bottomRight; } range; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; } reference;
@property (readonly, nonatomic) TSCHChartDrawableInfo *chart;

+ (Class)archivedSelectionClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initFromArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithChartInfo:(id)a0;
- (id)initWithChartInfo:(id)a0 reference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (char)returnChartFrameForAutoscroll;

@end

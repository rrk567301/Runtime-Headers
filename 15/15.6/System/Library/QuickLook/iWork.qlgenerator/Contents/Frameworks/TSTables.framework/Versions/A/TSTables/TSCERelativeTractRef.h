@class TSCECellTractRef;

@interface TSCERelativeTractRef : NSObject <NSCopying> {
    TSCECellTractRef *_absTractRef;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _relativeColumns;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _relativeRows;
}

@property (nonatomic) char spansAllColumns;
@property (nonatomic) char spansAllRows;
@property (nonatomic) char preserveRectangular;
@property (nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (readonly, nonatomic) struct TSUPreserveFlags { unsigned char x0; } preserveFlags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addRow:(unsigned int)a0;
- (const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)rows;
- (const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)columns;
- (void)setColumns:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (void)setRows:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (void)addColumn:(unsigned short)a0;
- (unsigned int)numRows;
- (void)addColumnRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)removeRowRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (id)absoluteCellTractRefForHostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a0;
- (void)addRowRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (id)initWithAbsoluteTractRef:(id)a0 hostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a1;
- (char)isRectangularRange;
- (unsigned int)numColumns;
- (void)removeColumnRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (id)initWithTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a1;
- (unsigned int)numRelativeRows;
- (struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; })relativeTopLeft;
- (void)addRelativeRow:(int)a0;
- (const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)relativeColumns;
- (id)absoluteCellTractRefForHostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a0 offTable:(char *)a1;
- (void)addRelativeColumn:(short)a0;
- (void)addRelativeColumnRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)addRelativeRowRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)adjustRelativeIndexesBy:(const struct TSUColumnRowOffset { int x0; int x1; } *)a0;
- (BOOL)hasTableUID;
- (id)initWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0 hostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a1;
- (char)isSingleCellOrSpanningRange;
- (void)normalizeSpanningSettings;
- (unsigned int)numRelativeColumns;
- (void)preserveFlagsFixingInversionsForTract:(id)a0 absFromRelColumns:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a1 absFromRelRows:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a2;
- (struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; })relativeBottomRight;
- (struct TSCERelativeRangeCoordinate { struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; } x0; struct TSCERelativeCellCoordinate { int x0; short x1; char x2; char x3; } x1; })relativeBoundingRangeWithContainingCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a0;
- (const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)relativeRows;
- (void)removeRelativeColumnRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)removeRelativeRowRange:(const struct TSUIndexRange { long long x0; long long x1; } *)a0;
- (void)setRelativeColumns:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (void)setRelativeRows:(const struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } *)a0;
- (char)verifySpanningSettings;

@end

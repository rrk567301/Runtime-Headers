@class TSCEValue, TSCECalculationEngine;

@interface TSCEEvalRef : NSObject <NSCopying> {
    struct TSCETableResolverWrapper { id x0; } *_tableResolver;
    struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _columns; struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _rows; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; unsigned char _spanType; struct TSUPreserveFlags { unsigned char _flags; } _preserveFlags; char _preserveRectangular; char _mixedColumnStartedWithPreserve; char _mixedRowStartedWithPreserve; } _tractRef;
}

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (readonly, nonatomic) struct TSCETableResolverWrapper { id x0; } *tableResolver;
@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } topLeft;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } bottomRight;
@property (readonly, nonatomic) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } rangeCoord;
@property (readonly, nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } rangeRef;
@property (nonatomic) unsigned char rangeContextOverride;
@property (readonly, nonatomic) char hasCachedValue;
@property (retain) TSCEValue *cachedValue;
@property (nonatomic) char cachedValueWasFetchedWithRichTextAttributes;

+ (id)mergeLeftRef:(id)a0 rightRef:(id)a1 outError:(int *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; char x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; })format:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a0;
- (const struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; char x5; char x6; char x7; } *)tractRef;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; })bodyRangeOfTable;
- (id)canonicalCellReferenceForReference;
- (unsigned char)getHidingActionForRows:(char)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })getResolverUID;
- (id)initWithTableResolver:(struct TSCETableResolverWrapper { id x0; } *)a0 topLeft:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a1 bottomRight:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a2 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a3;
- (id)initWithTableResolver:(struct TSCETableResolverWrapper { id x0; } *)a0 tractRefCore:(const struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; char x5; char x6; char x7; } *)a1;
- (id)intersectionWithHostCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a0 rangeContext:(unsigned char)a1;
- (id)makeCellReferenceForOffset:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 apparentTractRef:(const struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; char x5; char x6; char x7; } *)a1;
- (id)makeCellReferenceInSameTable:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a0;
- (void)resetResolver:(id)a0;
- (id)scalarValueFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a0 readOptions:(unsigned short)a1;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; })tableRangeOfTable;
- (id)valueForEvalContext:(id)a0 readOptions:(unsigned short)a1;

@end

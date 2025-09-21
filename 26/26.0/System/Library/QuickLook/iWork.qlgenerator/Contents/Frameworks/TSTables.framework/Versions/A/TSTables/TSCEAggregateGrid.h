@class __cap_, __end_;

@interface TSCEAggregateGrid : TSCEAbstractGrid <NSCopying> {
    struct vector<TSCEGridValue *, std::allocator<TSCEGridValue *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _grids;
    unsigned long long *_argumentCounts;
    unsigned long long _count;
    long long _lastReturnedIndex;
    long long _lastReturnedArgIndex;
    long long _lastReturnedSubindex;
}

- (id)value;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (struct TSCEGridDimensions { unsigned int x0; unsigned int x1; })dimensions;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)flattenedGrid:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;
- (id)valueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 accessContext:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;
- (id)asValueGrid:(id)a0;
- (id)deepResolveInPlace:(id)a0;
- (char)deepType:(id)a0 outError:(id *)a1;
- (id)initWithGrids:(const void *)a0;
- (id)valueAtIndex:(unsigned long long)a0 accessContext:(struct TSCEGridAccessContext { id x0; id x1; id x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;

@end

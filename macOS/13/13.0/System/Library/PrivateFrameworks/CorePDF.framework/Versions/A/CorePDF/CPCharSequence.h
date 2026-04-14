@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {
    unsigned int length;
    struct CPPDFChar **charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    BOOL wasMerged;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (unsigned int)length;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)dispose;
- (void)resize:(unsigned int)a0;
- (void)addChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a0;
- (struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)charAtIndex:(unsigned int)a0;
- (id)initSuper;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBounds;
- (id)initWithSizeFor:(unsigned int)a0;
- (id)initWithChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a0 length:(unsigned int)a1;
- (struct CPPDFChar **)charArray;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a0 length:(unsigned int)a1;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a0 length:(unsigned int)a1 ifTrue:(void /* function */ *)a2 passing:(void *)a3;
- (void)addCharsFromSequence:(id)a0;
- (void)removeChar;
- (void)removeAllChars;
- (void)replaceCharAtIndex:(unsigned int)a0 withChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct CGSize { double x0; double x1; } x6; struct CPPDFStyle *x7; double x8; int x9; long long x10; } *)a1;
- (void)removeCharAtIndex:(unsigned int)a0;
- (void)removeFrom:(unsigned int)a0;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)sortByAnchorYDecreasingXIncreasingApprox;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)sortBy:(void /* function */ *)a0;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)a0;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)a0;
- (void)merge:(id)a0 by:(void /* function */ *)a1;
- (BOOL)wasMerged;
- (id)newSubsequenceFrom:(unsigned int)a0 length:(unsigned int)a1;
- (void)splitToSubsequences:(id)a0 whereTrue:(void /* function */ *)a1 passing:(void *)a2;
- (BOOL)removeSubsequences:(id)a0 whereTrue:(void /* function */ *)a1 passing:(void *)a2;
- (void)copyToSubsequence:(id)a0 from:(unsigned int)a1 length:(unsigned int)a2;
- (void)copyToSubsequence:(id)a0 ifTrue:(void /* function */ *)a1 passing:(void *)a2;
- (BOOL)removeToSubsequence:(id)a0 ifTrue:(void /* function */ *)a1 passing:(void *)a2;
- (BOOL)map:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)mapWithIndex:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)mapWithIndex:(void /* function */ *)a0 from:(unsigned int)a1 length:(unsigned int)a2 passing:(void *)a3;
- (BOOL)mapToPairs:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)mapToPairsWithIndex:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)map:(void /* function */ *)a0 whereNeighborsWith:(id)a1 passing:(void *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsFrom:(unsigned int)a0 length:(unsigned int)a1;
- (double)averageRotation;

@end

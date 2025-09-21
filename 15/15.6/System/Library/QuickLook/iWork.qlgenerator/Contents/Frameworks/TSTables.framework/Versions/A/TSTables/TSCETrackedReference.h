@interface TSCETrackedReference : NSObject <NSCopying> {
    struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *_AST;
}

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } formulaCoord;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)ast;
- (void)registerWithCalcEngine:(id)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)encodeToExpandedArchive:(void *)a0 archiver:(id)a1;
- (id)getPrecedentsWithCalcEngine:(id)a0 hostOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initByCopyingASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 atFormulaCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } *)a1;
- (id)initFromExpandedArchive:(const void *)a0;
- (id)initWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)initWithSpanningRangeRef:(const struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } *)a0;
- (id)initWithTrackedReferenceTSPObjectDeprecated:(id)a0;
- (char)isEqualToTrackedReference:(id)a0;
- (id)precedentsWithCalcEngine:(id)a0 hostOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)referencesForCalcEngine:(id)a0 referenceTrackerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })refersToCellRefForCalculationEngine:(id)a0 referenceTrackerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)replaceContentsWithContentsOfTrackedReference:(id)a0;

@end

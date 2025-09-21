@interface TSCEBooleanFormulaNode : TSCEFormulaNode

@property (nonatomic) BOOL value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBoolean:(BOOL)a0;
- (void)appendToNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 symbolTable:(void *)a2 calcEngine:(id)a3;

@end

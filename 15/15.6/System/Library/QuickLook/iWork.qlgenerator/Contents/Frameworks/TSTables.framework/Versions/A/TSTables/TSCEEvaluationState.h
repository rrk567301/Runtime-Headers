@class NSSet;

@interface TSCEEvaluationState : NSObject {
    const struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *_AST;
    void *_elementIterator;
}

@property (nonatomic) unsigned char rangeContextOverride;
@property (retain, nonatomic) NSSet *warnings;
@property (nonatomic) struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *ownedAST;

- (void)dealloc;
- (void).cxx_destruct;
- (void *)elementIterator;
- (id)initWithAST:(const struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 rewriteContext:(struct TSCEFormulaRewriteContext { id x0; id x1; struct TSCEFormulaRewriteContextRecord { struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; struct TSUColumnRowOffset { int x0; int x1; } x2; char x3; char x4; char x5; char x6; char x7; char x8; char x9; } x2; } *)a1 warnings:(id)a2;

@end

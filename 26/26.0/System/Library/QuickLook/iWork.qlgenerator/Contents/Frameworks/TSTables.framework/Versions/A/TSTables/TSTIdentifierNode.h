@class NSString, NSMutableArray;

@interface TSTIdentifierNode : TSTExpressionNode {
    NSMutableArray *_components;
}

@property (readonly, nonatomic) NSString *fullIdentifier;
@property (readonly, nonatomic) NSString *lastIdentifierComponent;
@property (readonly, nonatomic) NSString *lastComponentWithWhitespaceAppended;
@property (nonatomic) unsigned int symbol;
@property (retain, nonatomic) NSString *aggregateFunction;

- (id)string;
- (id)tableName;
- (void).cxx_destruct;
- (int)tokenType;
- (id)sheetName;
- (unsigned long long)componentCount;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)detokenizedText;
- (id)trimIdentifier:(void *)a0;
- (void)addIdentifierComponent:(id)a0;
- (unsigned long long)allowsNewIdentifier;
- (void)appendToLastComponent:(id)a0;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1 symbolTable:(void *)a2;
- (id)copyByResolvingIdentifiers:(id)a0 hostTable:(id)a1 baseHostCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a2 forceReferenceInterpretation:(BOOL)a3 symbolTable:(void *)a4 oldToNewNodeMap:(id)a5;
- (id)formulaPlainText;
- (id)identifierComponents;
- (id)initAsCopyOf:(id)a0 intoContext:(id)a1 children:(id)a2;
- (id)initWithContext:(id)a0 children:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (id)initWithContext:(id)a0 identifier:(id)a1 firstIndex:(unsigned long long)a2 lastIndex:(unsigned long long)a3;
- (void)insertFormulaText:(id)a0 printingOptions:(unsigned int)a1;
- (BOOL)isEqualToExpressionNode:(id)a0;
- (BOOL)isIdentifierNode;
- (struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })recordHashesForSubexpressions:(id)a0;
- (id)transformToUseScopedVariables:(void *)a0;

@end

@class NSString, NSMutableArray, TSCEPartialResult;

@interface TSCEFormulaNode : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char nodeType;
@property (retain, nonatomic) NSMutableArray *children;
@property (readonly, nonatomic) unsigned long long numChildren;
@property (retain, nonatomic) NSString *whitespaceBefore;
@property (retain, nonatomic) NSString *whitespaceAfter;
@property (retain, nonatomic) TSCEPartialResult *partialResult;
@property (readonly, nonatomic) char isFunctionNode;
@property (readonly, nonatomic) char isReferenceNode;
@property (readonly, nonatomic) char isColonNode;
@property (readonly, nonatomic) char isContinuedLetNode;
@property (readonly, nonatomic) char isArgumentPlaceholderNode;
@property (readonly, nonatomic) char isEmptyNode;
@property (readonly, nonatomic) char isIdentifierNode;
@property (readonly, nonatomic) char isListNode;
@property (readonly, nonatomic) char isConstantNode;
@property (readonly, nonatomic) char isArrayNode;

+ (id)booleanNode:(char)a0;
+ (id)chartFunctionForArgs:(id)a0;
+ (id)dateNode:(id)a0;
+ (id)function:(unsigned short)a0 forArgs:(id)a1;
+ (id)literalStringNode:(id)a0;
+ (id)numberAsDoubleNode:(double)a0;
+ (id)numberNode:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0;
+ (id)stringForNodeType:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)appendToNodeArray:(struct TSCEASTNodeArray { char *x0; unsigned long long x1; unsigned long long x2; BOOL x3; } *)a0 hostCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1 symbolTable:(void *)a2 calcEngine:(id)a3;
- (id)initWithNodeType:(unsigned char)a0;

@end

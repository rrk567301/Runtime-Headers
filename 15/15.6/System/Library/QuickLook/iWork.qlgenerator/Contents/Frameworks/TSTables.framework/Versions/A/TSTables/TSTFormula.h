@class TSCECalculationEngine, NSString, TSCEFormulaObject, TSCEError, TSTExpressionNode, TSTTableInfo;

@interface TSTFormula : NSObject <NSCopying> {
    TSTTableInfo *_hostInfo;
    struct TSUModelCellCoord { struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } _coord; } _hostCell;
}

@property (nonatomic) char isSyntaxError;
@property (copy, nonatomic) NSString *initialWhitespace;
@property (weak, nonatomic) TSCECalculationEngine *calculationEngine;
@property (readonly, nonatomic) TSCEFormulaObject *formula;
@property (readonly, nonatomic) TSCEFormulaObject *geometricFormula;
@property (readonly, nonatomic) TSCEError *syntaxError;
@property (nonatomic) char fixupFormulas;
@property (readonly, nonatomic) char formulaWasFixable;
@property (readonly, nonatomic) char formulaFixupsShouldStick;
@property (retain, nonatomic) TSTExpressionNode *expressionTree;
@property (nonatomic, getter=isEmpty) char empty;

+ (char)storageExceedsMaxFormulaLength:(id)a0;
+ (id)doubleQuoteCharacters;
+ (id)formulaForCell:(id)a0 atCellID:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a1 inTable:(id)a2;
+ (int)formulaQuoteContextAtCharIndex:(unsigned long long)a0 inStorage:(id)a1;
+ (char)isFormulaEqualsCharacter:(unsigned short)a0;
+ (id)leadingSingleQuoteEscapeCharacters;
+ (id)leftParenCharacters;
+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)a0 inStorage:(id)a1;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)a0 unmatchedParenCount:(unsigned long long)a1 quoteContext:(int)a2 inStorage:(id)a3;
+ (int)quoteContextAtCharIndex:(unsigned long long)a0 previousContext:(int)a1 inStorage:(id)a2;
+ (id)rightParenCharacters;
+ (id)singleQuoteCharacters;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithCalculationEngine:(id)a0 expressionTree:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a2 hostTable:(id)a3;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a4;
- (void)addTSTCanvasReferencesToSet:(id)a0 inRangeContext:(unsigned char)a1 withColorHelper:(id)a2 preferringNodesFromStorage:(id)a3 showingSpillRanges:(char)a4 calcEngine:(id)a5 allVisitedNodes:(id)a6;
- (void)fixPreserveFlagsForCategoryRefInNode:(id)a0;
- (id)formulaDetokenizedText;
- (id)formulaPlainText;
- (char)hasBareArgumentPlaceholders;
- (id)initWithCalculationEngine:(id)a0 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a1 hostTable:(id)a2;
- (id)initWithCalculationEngine:(id)a0 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a1 hostTable:(id)a2;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a4 suppressAutomaticNamedReferenceInvalidation:(char)a5;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a4;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1 viewHostCell:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a2 formula:(id)a3 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a4 suppressAutomaticNamedReferenceInvalidation:(char)a5;
- (void)insertFormulaText:(id)a0 includeWhitespace:(char)a1;
- (void)insertFormulaTextNonRecursive:(id)a0 includeWhitespace:(char)a1;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)p_fixFormula:(id)a0;
- (id)p_formulaAsTextReturningTokenValues:(char)a0;
- (void)reparseWithStorage:(id)a0;
- (void)reparseWithStorage:(id)a0 adjustExpressionTree:(id /* block */)a1;

@end

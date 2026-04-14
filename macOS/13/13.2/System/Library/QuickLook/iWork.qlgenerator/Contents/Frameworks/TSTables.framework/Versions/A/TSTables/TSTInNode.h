@interface TSTInNode : TSTExpressionNode

+ (id)inString;

- (id)string;
- (int)tokenType;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (struct TSCEFunctionArgSpec { } *)argumentSpec;
- (void)insertFormulaText:(id)a0 includeWhitespace:(BOOL)a1;
- (id)formulaPlainText;

@end

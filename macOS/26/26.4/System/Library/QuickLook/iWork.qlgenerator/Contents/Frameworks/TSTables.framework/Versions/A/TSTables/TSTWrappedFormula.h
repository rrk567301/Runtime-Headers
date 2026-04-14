@interface TSTWrappedFormula : TSTFormula

@property (nonatomic) unsigned short functionIndex;

+ (BOOL)storageExceedsMaxFormulaLength:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertFormulaText:(id)a0 printingOptions:(unsigned int)a1;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)a0 adjustExpressionTree:(id /* block */)a1;

@end

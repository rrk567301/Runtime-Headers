@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula {
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReference:(id)a0;
+ (id)formulaWithReferences:(id)a0;

- (void).cxx_destruct;
- (id)initWithReference:(id)a0;
- (id)initWithReferences:(id)a0;
- (void)setReferences:(id)a0;
- (void)prepareTokens;
- (BOOL)isConstantStringFormula;
- (id)constantValuesFromConstantStringFormula;
- (id)referencesFromFormula;
- (void)setWorkbook:(id)a0;
- (id)references;
- (id)initWithWorkbook:(id)a0;
- (unsigned long long)countOfCellsBeingReferenced;

@end

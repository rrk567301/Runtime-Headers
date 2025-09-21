@class NSString, TSCEFormulaObject, TSTStockDetails, TSULocale;

@interface TSTCellFormulaSpec : TSTCellSpec <TSCEFormulaReturning> {
    TSULocale *_locale;
    unsigned int _interactionType;
}

@property (readonly, nonatomic) TSCEFormulaObject *formulaObject;
@property (readonly, nonatomic) unsigned char categoryAggregateType;
@property (readonly, nonatomic) TSTStockDetails *stockDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned int)interactionType;
- (char)isEquivalent:(id)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (char)p_mightBeEqual:(id)a0;
- (id)asFormulaSpec;
- (id)cellSpecReplacingFormulaObject:(id)a0 locale:(id)a1;
- (char)hasFormulaContainingUidReferences;
- (char)hasTSCEFormula;
- (id)initWithFormulaObject:(id)a0 fromTableInfo:(id)a1 fromCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a2;
- (id)initWithFormulaObject:(id)a0 locale:(id)a1;
- (void)p_computeinteractionType:(id)a0;

@end

@class TNChartMediator;

@interface TNChartFormulaHelper : NSObject

@property (nonatomic) char createSpanningReferences;
@property (readonly, nonatomic) TNChartMediator *chartMediator;

+ (id)cellRegionCullingToFirstFoundLevelFrom:(id)a0 inTable:(id)a1 byRows:(char)a2;
+ (id)chartFormulasForSummaryRegion:(id)a0 inTable:(id)a1;

- (void).cxx_destruct;
- (id)chartFormulaByAppendingCategoryReferences:(struct vector<TSCECategoryRef *, std::allocator<TSCECategoryRef *>> { id *x0; id *x1; struct __compressed_pair<TSCECategoryRef *__strong *, std::allocator<TSCECategoryRef *>> { id *x0; } x2; })a0 toFormula:(id)a1;
- (id)chartFormulaByAppendingRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a0 toFormula:(id)a1;
- (id)chartFormulaByAppendingTractReference:(id)a0 toFormula:(id)a1;
- (id)formulaStorageForChartGridDirection:(int)a0;
- (id)formulaStorageTransformTable:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 toLevel:(unsigned char)a1;
- (id)initWithMediator:(id)a0;
- (id)initWithMediator:(id)a0 createSpanningReferences:(char)a1;
- (unsigned char)p_addFormulasOfType:(unsigned long long)a0 rangeList:(id)a1 byRow:(char)a2 toFormulaMap:(id)a3;
- (unsigned char)p_addFormulasOfType:(unsigned long long)a0 rangeList:(id)a1 byRow:(char)a2 toFormulaMap:(id)a3 ofLevel:(unsigned char)a4;
- (char)p_addSeriesForRangeList:(id)a0 rowLabelRangeList:(id)a1 columnLabelRangeList:(id)a2 rowLabels:(id)a3 columnLabels:(id)a4 toFormulaMap:(id)a5;
- (void)p_addStringFormulasOfType:(unsigned long long)a0 rangeList:(id)a1 byRow:(char)a2 labels:(id)a3 toFormulaMap:(id)a4;
- (char)p_extendExistingSeriesWithSeriesRangeList:(id *)a0 rowLabelRangeList:(id *)a1 columnLabelRangeList:(id *)a2 toFormulaMap:(id)a3 withLocale:(id)a4;
- (unsigned char)p_firstDataCategoryLevelInFormulaMap:(id)a0 forTable:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (char)p_hasOneValuePerSeries;
- (id)p_labelsOfType:(unsigned long long)a0 formulaMap:(id)a1;
- (id)p_rangeListsForFormula:(id)a0 argumentIndexes:(id)a1 byRow:(char)a2 resolveSpanning:(char)a3;
- (void)p_rangeListsForFormula:(id)a0 argumentIndexes:(id)a1 byRow:(char)a2 resolveSpanning:(char)a3 orderedListOfOwnerIDs:(id)a4 ownerIDToRangeList:(id)a5;
- (id)p_rangeListsForFormulas:(id)a0 byRow:(char)a1 resolveSpanning:(char)a2;

@end

@class TSTFormulaPredicate;

@interface TSTTableFilterRule : NSObject <NSCopying>

@property (retain, nonatomic) TSTFormulaPredicate *predicate;
@property (nonatomic) BOOL doesNotNeedFormulaRewriteForImport;

+ (id)getPredArgDataFromCell:(id)a0;
+ (id)ruleWithFormulaPredicate:(id)a0;
+ (id)ruleWhereValuesInTable:(id)a0 inBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a1 matchCell:(id)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)formula;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithFormulaPredicate:(id)a0;
- (id)initRuleWhereValuesInTable:(id)a0 andDataList:(id)a1 inBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a2 matchCell:(id)a3;
- (id)copyByRewritingToUidFormWithTableInfo:(id)a0;
- (id)copyByRewritingToGeometricFormWithTableInfo:(id)a0 containsBadRef:(BOOL *)a1;
- (id)copyByRewritingFromTableModel:(id)a0 toTableModel:(id)a1;
- (BOOL)needsThreshold;
- (BOOL)isUniquesOrDuplicates;
- (void)setDoesNotNeedFormulaRewriteForImport;
- (BOOL)needsFormulaRewriteForImport;
- (BOOL)matchesRow:(unsigned int)a0 withFormulaTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 withCalculationEngine:(id)a2;
- (struct TSUModelColumnIndex { unsigned short x0; })baseColumnIndexForFilterRuleInTableModel:(id)a0;
- (BOOL)matchesCell:(id)a0;
- (void)encodeToPrePivotArchive:(void *)a0 archiver:(id)a1;
- (id)initFromPrePivotArchive:(const void *)a0;

@end

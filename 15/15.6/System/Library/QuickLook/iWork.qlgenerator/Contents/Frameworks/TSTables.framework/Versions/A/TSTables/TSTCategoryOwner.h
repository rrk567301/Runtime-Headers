@class TSCECalculationEngine, NSArray, TSCEBulkCellChangeMinion, TSTTableModel, NSMutableArray;

@interface TSTCategoryOwner : TSPObject <TSTCellWillChangeProtocol, TSTMergeChangeProtocol> {
    TSCECalculationEngine *_calcEngine;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_groupBys;
}

@property (weak, nonatomic) TSTTableModel *tableModel;
@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } baseTableUID;
@property (readonly, nonatomic) NSArray *groupBys;
@property (retain, nonatomic) TSCEBulkCellChangeMinion *minion;
@property (readonly, nonatomic) char backwardCompatibleToPrePivot;
@property (readonly, nonatomic) char allowRegistrationOfAggFormulas;
@property (readonly, nonatomic) char isRegisteredWithCalcEngine;

+ (long long)p_compareGroupByViaOwnerIndexes:(id)a0 otherGroupBy:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)teardown;
- (void)willModify;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)calcEngine;
- (void)addGroupByInSortedOrder:(id)a0;
- (void)didAddRows:(const void *)a0;
- (void)didMergeRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (void)didUnmergeRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)groupByByUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)groupByForOwnerIndex:(unsigned short)a0;
- (char)hasEnabledGroupBys;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1 forBaseTable:(id)a2;
- (id)initWithBaseTableModel:(id)a0;
- (void)linkGroupBy:(id)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })p_willApplyCell:(id)a0 baseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a1 refreshCategoryInfo:(char)a2;
- (void)rebuildAllAggFormulas;
- (id)registerGroupByForColumns:(id)a0 ownerIndex:(unsigned short)a1 hiddenStates:(id)a2 groupBySet:(id)a3;
- (int)registerWithCalcEngine:(id)a0 baseOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)registerWithDistributors;
- (void)remapTableUIDsInFormulasWithMap:(const void *)a0 calcEngine:(id)a1;
- (void)resetAllGroupings;
- (void)setCalcEngine:(id)a0;
- (void)setFormulaOwnerUIDsWithMap:(id)a0;
- (void)sortGroupBys;
- (void)unpackAfterUnarchive:(id)a0;
- (void)unregisterFromCalcEngine;
- (void)unregisterFromDistributors;
- (void)unregisterGroupBy:(id)a0;
- (void)updateWithDocumentRoot:(id)a0;
- (char)verifyConnectionsWithPivotDataModel:(id)a0;
- (char)verifySubOwnerUIDsUsed:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)willApplyBaseCellMap:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)willApplyCell:(id)a0 baseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; })a1 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)willApplyConcurrentCellMap:(id)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)willRemoveRows:(const void *)a0 tableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;

@end

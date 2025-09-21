@class TSCEDependencyTracker;

@interface TSCESpanningDependencies : NSObject {
    struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _bottomRight; } _bodyRangeForTable;
    struct TSCECellCoordToReferringColumnRefs { struct unordered_map<TSUCellCoord, TSCECombinedColumnRefs, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::allocator<std::pair<const TSUCellCoord, TSCECombinedColumnRefs>>> { struct __hash_table<std::__hash_value_type<TSUCellCoord, TSCECombinedColumnRefs>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSCECombinedColumnRefs>, TSCECellCoordinateHash, TSCECellCoordinateEqual>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSCECombinedColumnRefs>, TSCECellCoordinateEqual, TSCECellCoordinateHash>, std::allocator<std::__hash_value_type<TSUCellCoord, TSCECombinedColumnRefs>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSCECombinedColumnRefs>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSCECombinedColumnRefs>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSCECombinedColumnRefs>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSCECombinedColumnRefs>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _columnRefsByCellCoord; } _cellsToReferringColumnRefs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cellsToReferringColumnRefsMutex;
    struct unordered_map<TSCEColumnRangeContextPair, TSCECellCoordSet, TSCEColumnRangeContextPairHash, TSCEColumnRangeContextPairEqual, std::allocator<std::pair<const TSCEColumnRangeContextPair, TSCECellCoordSet>>> { struct __hash_table<std::__hash_value_type<TSCEColumnRangeContextPair, TSCECellCoordSet>, std::__unordered_map_hasher<TSCEColumnRangeContextPair, std::__hash_value_type<TSCEColumnRangeContextPair, TSCECellCoordSet>, TSCEColumnRangeContextPairHash, TSCEColumnRangeContextPairEqual>, std::__unordered_map_equal<TSCEColumnRangeContextPair, std::__hash_value_type<TSCEColumnRangeContextPair, TSCECellCoordSet>, TSCEColumnRangeContextPairEqual, TSCEColumnRangeContextPairHash>, std::allocator<std::__hash_value_type<TSCEColumnRangeContextPair, TSCECellCoordSet>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEColumnRangeContextPair, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEColumnRangeContextPair, TSCECellCoordSet>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEColumnRangeContextPair, TSCECellCoordSet>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEColumnRangeContextPair, TSCECellCoordSet>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _referringColumnsToLocalCells;
    struct unordered_map<TSCEColumnRangeContextPair, TSCEInternalCellRefSet, TSCEColumnRangeContextPairHash, TSCEColumnRangeContextPairEqual, std::allocator<std::pair<const TSCEColumnRangeContextPair, TSCEInternalCellRefSet>>> { struct __hash_table<std::__hash_value_type<TSCEColumnRangeContextPair, TSCEInternalCellRefSet>, std::__unordered_map_hasher<TSCEColumnRangeContextPair, std::__hash_value_type<TSCEColumnRangeContextPair, TSCEInternalCellRefSet>, TSCEColumnRangeContextPairHash, TSCEColumnRangeContextPairEqual>, std::__unordered_map_equal<TSCEColumnRangeContextPair, std::__hash_value_type<TSCEColumnRangeContextPair, TSCEInternalCellRefSet>, TSCEColumnRangeContextPairEqual, TSCEColumnRangeContextPairHash>, std::allocator<std::__hash_value_type<TSCEColumnRangeContextPair, TSCEInternalCellRefSet>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEColumnRangeContextPair, TSCEInternalCellRefSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEColumnRangeContextPair, TSCEInternalCellRefSet>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCEColumnRangeContextPair, TSCEInternalCellRefSet>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCEColumnRangeContextPair, TSCEInternalCellRefSet>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _referringColumnsToRemoteCells;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isColumns;
@property (readonly, nonatomic) BOOL isRows;
@property (readonly, nonatomic) BOOL tooLargeFor3_1FileFormat;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;
@property (readonly, nonatomic) unsigned short internalOwnerID;
@property (readonly, nonatomic) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _topLeft; struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } _bottomRight; } totalRangeForTable;
@property (readonly, nonatomic) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } bodyRangeOfTable;
@property (nonatomic) TSCEDependencyTracker *dependencyTracker;

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeToArchive:(void *)a0;
- (void)cellRefsForFormulasReferringToIndex:(unsigned int)a0 outCellRefs:(void *)a1 cycleCellsOnly:(BOOL)a2;
- (void)addPrecedentsAtCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 toReferenceSet:(void *)a1;
- (BOOL)addReference:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a0 toColumn:(unsigned int)a1 rangeContext:(unsigned char)a2;
- (void)allFormulaCells:(void *)a0;
- (void)applyBlockToCellsReferencingColumn:(unsigned int)a0 block:(id /* block */)a1;
- (void)applyBlockToCellsReferencingColumn:(unsigned int)a0 rangeContext:(unsigned char)a1 block:(id /* block */)a2;
- (void)applyBlockToCellsReferencingColumnsInRange:(unsigned int)a0 endIndex:(unsigned int)a1 block:(id /* block */)a2;
- (void)applyBlockToCellsReferencingColumnsInRange:(unsigned int)a0 endIndex:(unsigned int)a1 rangeContext:(unsigned char)a2 block:(id /* block */)a3;
- (void)applyBlockToCellsReferencingCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 block:(id /* block */)a1;
- (BOOL)assertValidTableRanges;
- (BOOL)cellHasDeepPrecedentInRange:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 cellRange:(const struct TSCEInternalRangeReference { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; unsigned short x1; } *)a1;
- (void)cellsReferencingColumn:(unsigned int)a0 outCells:(id)a1;
- (void)cellsReferencingColumn:(unsigned int)a0 rangeContext:(unsigned char)a1 outCells:(id)a2;
- (void)cellsReferencingCoordinate:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 outCells:(id)a1;
- (void)collectReferencesForFormulasReferencingIndices:(unsigned int)a0 endIndex:(unsigned int)a1 outFormulaCells:(void *)a2;
- (unsigned long long)computedNumberOfDirtyPrecedents:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 cellIsInACycle:(BOOL)a1;
- (BOOL)coordinateIsInPotentiallyIgnoredHeaderOrFooter:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (void)decrementReferringDirtyCountAndPushNextLeaves:(const struct TSCECellToEvaluate { struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } x0; id x1; struct TSCECellRecord *x2; } *)a0 referencingCellIsInACycle:(BOOL)a1;
- (void)deleteReferencesFromCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (void)deleteReferencesFromCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 takeLock:(BOOL)a1;
- (void)dirtyAllFormulasReferencingRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0;
- (void)dirtyAllReferencingFormulas;
- (void)encodeToExpandedArchive:(void *)a0;
- (id)explainDirtyPrecedentCount:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 cellIsInACycle:(BOOL)a1;
- (void)findFormulasReferencingColumnsInRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })a0 columnIndex:(unsigned int)a1 shiftedTableUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 outCellsToRewrite:(void *)a3;
- (void)formulaCellsReferencingIndices:(unsigned int)a0 endIndex:(unsigned int)a1 outFormulaCells:(void *)a2;
- (void)formulaCellsReferencingRangesAffectedByInsertRows:(id)a0 outFormulaCells:(void *)a1;
- (void)formulaCellsReferencingRangesAffectedByMoveRows:(id)a0 outFormulaCells:(void *)a1;
- (void)formulaCellsReferencingRangesAffectedByRemoveRows:(id)a0 outFormulaCells:(void *)a1;
- (BOOL)hasDependentsAtCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)hasPrecedentsAtCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (id)initWithDependTracker:(id)a0 ownerID:(unsigned short)a1 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 isColumns:(BOOL)a3;
- (id)initWithDependTracker:(id)a0 ownerID:(unsigned short)a1 ownerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 isColumns:(BOOL)a3 archive:(const void *)a4;
- (void)insertReferringColumnRef:(const struct TSCEColumnReference { unsigned int x0; unsigned short x1; unsigned char x2; } *)a0 fromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;
- (id)precedentsAsString:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0 dirtyOnly:(BOOL)a1;
- (void)processDependentsForDFS:(id)a0 coord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 outCells:(void *)a2;
- (void)pushDependents:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 outDependents:(id)a1 referencingCellIsInACycle:(BOOL)a2;
- (void)readFromArchive:(const void *)a0;
- (void)readFromExpandedArchive:(const void *)a0;
- (void)removeAllPrecedents;
- (void)resetOwnerUIDForUpgrade:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)setTableRangesForTable:(const struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } *)a0 bodyRange:(const struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } *)a1;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })totalRangeOfTable;
- (void)unpackAfterUnarchive;
- (void)updateReferringFormulasForHeaderStateChange;

@end

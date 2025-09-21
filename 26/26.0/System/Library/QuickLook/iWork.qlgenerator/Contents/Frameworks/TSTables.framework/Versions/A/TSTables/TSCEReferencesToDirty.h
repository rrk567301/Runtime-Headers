@class TSCECellDirtier, TSCECalculationEngine;

@interface TSCEReferencesToDirty : TSPObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dirtyingMutex;
    TSCECellDirtier *_cellRefDirtier;
    struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _toDirtyOwnerIds;
    struct TSCEInternalCellRefSet { struct unordered_map<unsigned short, TSCECellCoordSet, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCECellCoordSet>>> { struct __hash_table<std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>>, std::allocator<std::__hash_value_type<unsigned short, TSCECellCoordSet>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _coordsForOwnerId; } _toDirtyInternalCellRefs;
    struct TSCECellRefSet { struct map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> { struct __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _coordsForOwnerUid; } _toDirtyCellRefs;
    struct TSCECellRefSet { struct map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> { struct __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _coordsForOwnerUid; } _toDirtyDependentsOnlyCellRefs;
    struct TSCEInternalCellRefSet { struct unordered_map<unsigned short, TSCECellCoordSet, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCECellCoordSet>>> { struct __hash_table<std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>>, std::allocator<std::__hash_value_type<unsigned short, TSCECellCoordSet>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _coordsForOwnerId; } _toUpdateDirtyPrecedentCountCellRefs;
    struct vector<TSCEInternalRangeReference, std::allocator<TSCEInternalRangeReference>> { struct TSCEInternalRangeReference *__begin_; struct TSCEInternalRangeReference *__end_; struct TSCEInternalRangeReference *__cap_; } _toDirtyRangeRefs;
    struct TSCEInternalCellRefSet { struct unordered_map<unsigned short, TSCECellCoordSet, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCECellCoordSet>>> { struct __hash_table<std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>>, std::allocator<std::__hash_value_type<unsigned short, TSCECellCoordSet>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _coordsForOwnerId; } _calcCellsInProgress;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, nonatomic) BOOL isEmptyForDirtying;
@property (nonatomic) BOOL shouldPerformDetectAndRepairConsistencyViolations;
@property (nonatomic) BOOL shouldCleanGraphForConsistencyViolation;
@property (readonly, nonatomic) BOOL debugOnly_DidDetectAndRepairConsistencyViolations;
@property (readonly, nonatomic) BOOL debugOnly_DidCleanGraphForConsistencyViolation;

- (void)commonInit;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)willClose;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)setCalculationEngine:(id)a0;
- (BOOL)hasDirtyingToPerformForOwnerId:(unsigned short)a0;
- (BOOL)flushDirtyReferencesForSeconds:(double)a0;
- (BOOL)hasPrecedentCountUpdatesPending;
- (void)updatePrecedentCountForCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a0;
- (void)_flushCellRefSetWithDepTracker:(id)a0 startTime:(id)a1 timeout:(double)a2;
- (void)_flushDependentOnlyCellRefSetWithDepTracker:(id)a0 startTime:(id)a1 timeout:(double)a2;
- (void)_flushDirtyOwnerIdsWithDepTracker:(id)a0 startTime:(id)a1 timeout:(double)a2;
- (void)_flushInternalCellRefSetWithDepTracker:(id)a0 startTime:(id)a1 timeout:(double)a2;
- (void)_flushRangeRefsWithDepTracker:(id)a0 startTime:(id)a1 timeout:(double)a2;
- (void)_flushUpdatePrecedentsCellRefSetWithDepTracker:(id)a0 startTime:(id)a1 timeout:(double)a2;
- (void)addInProgressCalcCellRefs:(const void *)a0;
- (void)clearInProgressCalcCellRefs;
- (void)dirtyAllCellsInOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)dirtyAllCellsInOwnerId:(unsigned short)a0;
- (void)dirtyCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)dirtyCellRefs:(const void *)a0;
- (void)dirtyCellRefsInReferenceSet:(id)a0;
- (void)dirtyCoords:(const void *)a0 inOwnerId:(unsigned short)a1;
- (void)dirtyInternalCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a0;
- (void)dirtyInternalCellRefs:(const void *)a0;
- (void)dirtyInternalCellRefsVector:(const void *)a0;
- (void)dirtyInternalRangeRef:(const struct TSCEInternalRangeReference { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; unsigned short x1; } *)a0;
- (void)dirtyOnlyDependentsOfCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)dirtyRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)flushAllDirtyReferences;
- (void)flushCellDirtier;
- (id)initWithCalcEngine:(id)a0;
- (unsigned long long)numberOfInProgressCalcCellRef;

@end

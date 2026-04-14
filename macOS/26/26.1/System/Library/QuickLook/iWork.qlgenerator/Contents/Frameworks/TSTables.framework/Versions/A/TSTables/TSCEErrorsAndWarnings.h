@class TSCEDependencyTracker;

@interface TSCEErrorsAndWarnings : NSObject {
    struct unordered_map<TSUCellCoord, TSCEErrorWarningCell, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSCEErrorWarningCell>>> { struct __hash_table<std::__hash_value_type<TSUCellCoord, TSCEErrorWarningCell>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSCEErrorWarningCell>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSCEErrorWarningCell>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>>, std::allocator<std::__hash_value_type<TSUCellCoord, TSCEErrorWarningCell>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSCEErrorWarningCell>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSCEErrorWarningCell>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSCEErrorWarningCell>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSCEErrorWarningCell>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _errorForCell;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } ownerUID;
@property (readonly, nonatomic) unsigned short internalOwnerID;
@property (nonatomic) TSCEDependencyTracker *dependencyTracker;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long countOfErrors;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeToArchive:(void *)a0;
- (struct TSCECellCoordSet { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; } x1; })cellCoordsWithAnyErrors;
- (struct TSCECellCoordSet { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; } x1; })cellCoordsWithError:(long long)a0;
- (struct TSCECellCoordSet { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; } x1; })cellCoordsWithSpillingErrors;
- (void)clearAllErrorsAndWarnings;
- (void)clearErrorAndWarningsForCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (const struct TSCEErrorWarningCell { id x0; id x1; struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } x2; } *)errorCellForCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (id)initWithDependTracker:(id)a0 ownerID:(unsigned short)a1;
- (void)readFromArchive:(const void *)a0;
- (void)replaceErrorForCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 error:(id)a1 errDueToCellRef:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a2;
- (void)setWarnings:(id)a0 forCell:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1;

@end

@class TSCEDependencyTracker;

@interface TSCEWholeOwnerDependencies : NSObject {
    struct TSCEInternalCellRefSet { struct unordered_map<unsigned short, TSCECellCoordSet, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, TSCECellCoordSet>>> { struct __hash_table<std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::hash<unsigned short>, std::equal_to<unsigned short>>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, TSCECellCoordSet>, std::equal_to<unsigned short>, std::hash<unsigned short>>, std::allocator<std::__hash_value_type<unsigned short, TSCECellCoordSet>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _coordsForOwnerId; } _referencesToThisTable;
    struct unordered_multimap<TSUCellCoord, unsigned short, TSCECellCoordinateHash, TSCECellCoordinatesEqualStruct, std::allocator<std::pair<const TSUCellCoord, unsigned short>>> { struct __hash_table<std::__hash_value_type<TSUCellCoord, unsigned short>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, unsigned short>, TSCECellCoordinateHash, TSCECellCoordinatesEqualStruct>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, unsigned short>, TSCECellCoordinatesEqualStruct, TSCECellCoordinateHash>, std::allocator<std::__hash_value_type<TSUCellCoord, unsigned short>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, unsigned short>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, unsigned short>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, unsigned short>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, unsigned short>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _referencesFromThisTable;
    void *_unarchivedRefSet;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned short internalOwnerID;
@property (nonatomic) TSCEDependencyTracker *dependencyTracker;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeToArchive:(void *)a0;
- (BOOL)addOwnerReference:(const struct TSCEInternalCellReference { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; unsigned short x1; unsigned short x2; } *)a0;
- (void)addPrecedentsOfCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 toReferenceSet:(void *)a1;
- (void)deleteOwnerReferencesFromCell:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)encodeToExpandedArchive:(void *)a0;
- (id)initWithDependTracker:(id)a0 ownerID:(unsigned short)a1;
- (void)readFromArchive:(const void *)a0;
- (void)readFromExpandedArchive:(const void *)a0;
- (void)removeAllPrecedents;
- (void)unpackAfterUnarchive;

@end

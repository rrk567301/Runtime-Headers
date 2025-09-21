@class TSCEMutableUIDSet;

@interface TSCEGroupByChange : NSObject <NSCopying>

@property (readonly, nonatomic) struct TSKUIDStructMap { struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } updatedGroupNodeToPrevious;
@property (nonatomic) unsigned char changeType;
@property (nonatomic) unsigned char previousLevel;
@property (nonatomic) unsigned char updatedLevel;
@property (nonatomic) BOOL isInverse;
@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } groupByUid;
@property (readonly, nonatomic) struct vector<TSCEGroupingColumnChange, std::allocator<TSCEGroupingColumnChange>> { struct TSCEGroupingColumnChange *__begin_; struct TSCEGroupingColumnChange *__end_; struct TSCEGroupingColumnChange *__cap_; } groupingColumnChanges;
@property (readonly, nonatomic) struct TSKUIDStructMap { struct __hash_table<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>, std::allocator<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, TSKUIDStruct>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } previousGroupNodeToUpdated;
@property (readonly, nonatomic) TSCEMutableUIDSet *previousGroupNodeUids;
@property (readonly, nonatomic) TSCEMutableUIDSet *updatedGroupNodeUids;
@property (readonly, nonatomic) TSCEMutableUIDSet *removedGroupNodeUids;

+ (id)stringForGroupByChangeType:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (void)addRemoveOfGroupUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithType:(unsigned char)a0 groupByUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithType:(unsigned char)a0 groupingColumnChanges:(const void *)a1 groupByUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)mapPreviousGroupNodeUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 toUpdatedGroupNodeUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })previousGroupNodeUidForUpdatedGroupNodeUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (unsigned char)previousRelativeAncestorLevelForUpdatedAncestorCategoryLevel:(unsigned char)a0 numLevels:(unsigned char)a1;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })updatedGroupNodeUidForPreviousGroupNodeUid:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (unsigned char)updatedRelativeAncestorLevelForPreviousAncestorCategoryLevel:(unsigned char)a0 numLevels:(unsigned char)a1;

@end

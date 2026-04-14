@interface TSCEUIDSet : NSObject <NSCopying, NSMutableCopying> {
    struct unordered_set<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> { struct __hash_table<TSKUIDStruct, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<TSKUIDStruct>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<TSKUIDStruct, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _uuidSet;
}

@property (readonly) unsigned long long count;

- (BOOL)intersectsSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)reducedSetMinusUuidsFromVector:(const void *)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })anyUuid;
- (id)expandedSetWithUuidsFromVector:(const void *)a0;
- (BOOL)containsUuid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)expandedSetWithUuid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)expandedSetWithUuids:(const void *)a0;
- (void)foreachUuid:(id /* block */)a0;
- (id)initWithUUIDSet:(id)a0;
- (id)initWithUUIDVector:(const void *)a0;
- (BOOL)isAllInvalid;
- (BOOL)p_addUUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_addUUIDs:(const void *)a0;
- (void)p_addUUIDsFromVector:(const void *)a0;
- (BOOL)p_removeUUID:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (void)p_removeUUIDs:(const void *)a0;
- (void)p_removeUUIDsFromVector:(const void *)a0;
- (id)reducedSetMinusUuid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0;
- (id)reducedSetMinusUuids:(const void *)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct TSKUIDStruct *x2; })uuidsAsVector;
- (BOOL)isSubsetOf:(id)a0;
- (id)initWithTSUUUIDVector:(const void *)a0;
- (void)p_reserve:(unsigned long long)a0;
- (id)setByUnionWithSet:(id)a0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *x0; void *x1; void *x2; })uuidsAsTSUVector;

@end

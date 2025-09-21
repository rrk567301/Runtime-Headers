@class TSCECalculationEngine;

@interface TSCESpillingOriginCache : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
    struct unordered_map<TSCECellRef, TSCESpillingOriginCacheEntry *, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>, std::allocator<std::pair<const TSCECellRef, TSCESpillingOriginCacheEntry *>>> { struct __hash_table<std::__hash_value_type<TSCECellRef, TSCESpillingOriginCacheEntry *>, std::__unordered_map_hasher<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCESpillingOriginCacheEntry *>, std::hash<TSCECellRef>, std::equal_to<TSCECellRef>>, std::__unordered_map_equal<TSCECellRef, std::__hash_value_type<TSCECellRef, TSCESpillingOriginCacheEntry *>, std::equal_to<TSCECellRef>, std::hash<TSCECellRef>>, std::allocator<std::__hash_value_type<TSCECellRef, TSCESpillingOriginCacheEntry *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCESpillingOriginCacheEntry *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCESpillingOriginCacheEntry *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCESpillingOriginCacheEntry *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSCECellRef, TSCESpillingOriginCacheEntry *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _cache;
}

@property (weak, nonatomic) TSCECalculationEngine *calcEngine;

- (void)clearCache;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCalcEngine:(id)a0;
- (void)replaceSpillError:(id)a0 forSpillingOriginCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })spillRangeForSpillingOriginCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0 outError:(out id *)a1;

@end

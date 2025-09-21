@class TSPObjectContext;
@protocol TSPExternalReferenceDelegate;

@interface TSPObjectReferenceMap : NSObject {
    TSPObjectContext *_context;
    id<TSPExternalReferenceDelegate> _delegate;
    struct IdentifierMap<TSP::ReferenceMapInfo> { struct __hash_table<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::hash<long long>, std::equal_to<const long long>>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, std::equal_to<const long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::ReferenceMapInfo>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _inverseReferenceMap;
    struct IdentifierMap<__unsafe_unretained Class> { struct __hash_table<std::__hash_value_type<const long long, __unsafe_unretained Class>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::hash<long long>, std::equal_to<const long long>>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, __unsafe_unretained Class>, std::equal_to<const long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<const long long, __unsafe_unretained Class>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, __unsafe_unretained Class>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _classMap;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)addObjectReferenceMap:(id)a0;
- (void)addReferenceFromObjectIdentifier:(long long)a0 toObjectIdentifier:(long long)a1;
- (void)addReferenceFromObjectIdentifier:(long long)a0 toObjectOrLazyReference:(id)a1;
- (void)addReferencesFromObject:(id)a0 archiver:(id)a1;
- (id)descriptionOfAllPossiblePathsToObject:(id)a0 withLimit:(unsigned long long)a1;
- (id)descriptionOfAllPossiblePathsToObjectIdentifier:(long long)a0 withLimit:(unsigned long long)a1;
- (BOOL)hasParentsForObjectIdentifier:(long long)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1 externalReferencesFromComponent:(id)a2;
- (void)mergeWithObjectReferenceMap:(id)a0;
- (id)parentObjectPathsForObjectIdentifier:(long long)a0 limit:(unsigned long long)a1 totalParentObjects:(unsigned long long *)a2;
- (id)parentObjectsForObject:(id)a0;
- (id)parentObjectsForObjectIdentifier:(long long)a0;
- (unsigned long long)visitObjectWithIdentifier:(long long)a0 level:(unsigned long long)a1 mode:(int)a2 limit:(unsigned long long)a3 pathSuffix:(id)a4 visitedObjectIdentifiers:(id)a5 updatingParentObjectPaths:(id)a6;

@end

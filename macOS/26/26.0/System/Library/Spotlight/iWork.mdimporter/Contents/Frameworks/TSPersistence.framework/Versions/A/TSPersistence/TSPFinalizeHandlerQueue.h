@class TSPCancellationState, NSObject;
@protocol OS_dispatch_queue;

@interface TSPFinalizeHandlerQueue : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _rootObjectIdentifier;
    TSPCancellationState *_cancellationState;
    struct vector<TSP::FinalizeHandlerItem *, std::allocator<TSP::FinalizeHandlerItem *>> { struct FinalizeHandlerItem **__begin_; struct FinalizeHandlerItem **__end_; struct FinalizeHandlerItem **__cap_; } _order;
    struct IdentifierMap<TSP::FinalizeHandlerItem> { struct __hash_table<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::hash<long long>, std::equal_to<const long long>>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::equal_to<const long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _map;
    void *_currentItem;
}

- (void)reset;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFinalizeHandlers:(void *)a0 strongReferences:(void *)a1 forIdentifier:(long long)a2;
- (long long)currentObjectIdentifier;
- (id)initWithRootObjectIdentifier:(long long)a0;
- (id)initWithRootObjectIdentifier:(long long)a0 cancellationState:(id)a1;
- (void)runFinalizeHandlerForItem:(void *)a0;
- (BOOL)runFinalizeHandlers;
- (void)visitItemForCycleDetection:(void *)a0;

@end

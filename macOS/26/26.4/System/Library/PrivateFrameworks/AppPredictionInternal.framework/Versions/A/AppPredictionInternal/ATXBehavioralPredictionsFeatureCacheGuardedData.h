@interface ATXBehavioralPredictionsFeatureCacheGuardedData : NSObject {
    struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::allocator<std::pair<NSString *const, ATXPredictionItem>>> { struct __hash_table<std::__hash_value_type<NSString *, ATXPredictionItem>, std::__unordered_map_hasher<NSString *, std::pair<NSString *const, ATXPredictionItem>, ATXNSStringHash, ATXNSStringEqual>, std::__unordered_map_equal<NSString *, std::pair<NSString *const, ATXPredictionItem>, ATXNSStringEqual, ATXNSStringHash>, std::allocator<std::pair<NSString *const, ATXPredictionItem>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } cache;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end

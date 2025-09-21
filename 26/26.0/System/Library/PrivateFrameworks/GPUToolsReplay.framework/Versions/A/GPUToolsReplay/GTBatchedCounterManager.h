@interface GTBatchedCounterManager : NSObject {
    struct vector<std::unordered_set<unsigned int>, std::allocator<std::unordered_set<unsigned int>>> { void *__begin_; void *__end_; void *__cap_; } _processedBatches;
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _batchToEncoderMap;
    struct vector<std::queue<unsigned int>, std::allocator<std::queue<unsigned int>>> { void *__begin_; void *__end_; void *__cap_; } _perEncoderBatchQueue;
    struct vector<std::pair<NSDictionary *, NSArray *>, std::allocator<std::pair<NSDictionary *, NSArray *>>> { void *__begin_; void *__end_; void *__cap_; } _highPriorityArray;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _paused;
}

+ (BOOL)isInitialized;
+ (void)initialize;
+ (id)semaphore;
+ (id)semaphoreRequests;

- (void)pause;
- (void)cleanup;
- (void)resume;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_addBatchAtEncoderIndex:(unsigned int)a0 inEncoderArray:(id)a1;
- (void)_clearData;
- (void)_initializeData:(id)a0;
- (id)initWithEncoderBatchPriorityList:(id)a0;
- (id)nextPerEncoderBatchList:(id)a0;
- (BOOL)nextPerEncoderBatchListForHighPriorityBatches:(id)a0 withHighPriorityInfo:(id)a1;

@end

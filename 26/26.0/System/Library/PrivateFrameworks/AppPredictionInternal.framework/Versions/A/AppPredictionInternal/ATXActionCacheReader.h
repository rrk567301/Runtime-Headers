@class NSString;

@interface ATXActionCacheReader : ATXActionCacheClientReader {
    struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::allocator<std::pair<ATXAction *const, int>>> { struct __hash_table<std::__hash_value_type<ATXAction *, int>, std::__unordered_map_hasher<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionHash, ATXActionEqual>, std::__unordered_map_equal<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionEqual, ATXActionHash>, std::allocator<std::__hash_value_type<ATXAction *, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _actionToIndexMap;
    struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *__begin_; struct ATXPredictionItem *__end_; struct ATXPredictionItem *__cap_; } _predictionItems;
    struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *__begin_; struct ATXPredictionItem *__end_; struct ATXPredictionItem *__cap_; } _extraPredictionItems;
}

@property (readonly, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) long long assetVersion;

+ (struct unordered_map<NSString *, ATXPredictionItem, ATXNSStringHash, ATXNSStringEqual, std::allocator<std::pair<NSString *const, ATXPredictionItem>>> { struct __hash_table<std::__hash_value_type<NSString *, ATXPredictionItem>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringHash, ATXNSStringEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, ATXPredictionItem>, ATXNSStringEqual, ATXNSStringHash>, std::allocator<std::__hash_value_type<NSString *, ATXPredictionItem>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, ATXPredictionItem>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })getActionKeyToPredictionItemMapFromChunk:(id)a0;
+ (void)_getActionKeyToPredictionItemMapFromChunk:(id)a0 map:(void *)a1 abGroup:(id *)a2 assetVersion:(long long *)a3;
+ (void)_getExtraPredictionsFromChunk:(id)a0 map:(void *)a1 abGroup:(id *)a2 assetVersion:(long long *)a3;
+ (void)_getIndexToPredictionItemMapWithChunk:(id)a0 withPredictionCount:(long long)a1 map:(void *)a2 abGroup:(id *)a3 assetVersion:(long long *)a4;

- (id)initWithData:(id)a0;
- (void)failAndLog:(id)a0;
- (struct ATXPredictionItem { id x0; unsigned long long x1; float x2[828]; float x3; BOOL x4; BOOL x5; })predictionItemForAction:(id)a0;
- (void)enumerateActionsAndPredictionItemsForConsumerSubtype:(unsigned char)a0 limit:(unsigned long long)a1 block:(id /* block */)a2;
- (id)init;
- (id)initWithChunks:(id)a0;
- (struct unordered_map<ATXAction *, int, ATXActionHash, ATXActionEqual, std::allocator<std::pair<ATXAction *const, int>>> { struct __hash_table<std::__hash_value_type<ATXAction *, int>, std::__unordered_map_hasher<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionHash, ATXActionEqual>, std::__unordered_map_equal<ATXAction *, std::__hash_value_type<ATXAction *, int>, ATXActionEqual, ATXActionHash>, std::allocator<std::__hash_value_type<ATXAction *, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<ATXAction *, int>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })_getActionToIndexMap;
- (id).cxx_construct;
- (void)enumerateExtraPredictionItemsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end

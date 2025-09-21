@class NSString;

@interface _ETBufferDataSource : NSObject <ETDataProvider>

@property struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } dataStorage;
@property struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } blobShapes;
@property unsigned long long number_of_data_points;
@property unsigned long long batchSize;
@property struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; void *__cap_; } nonBatchBlobNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataPointAtIndex:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)numberOfDataPoints;
- (float *)dataAtIndex:(unsigned long long)a0 key:(const void *)a1;
- (id)initWithBlobShapes:(const void *)a0 numberOfDataPoints:(unsigned long long)a1 batchSize:(unsigned long long)a2 error:(id *)a3;

@end

@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {
    struct unordered_map<unsigned int, NSString *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, NSString *>>> { struct __hash_table<std::__hash_value_type<unsigned int, NSString *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _stringCache;
    NSData *_data;
}

- (id)initWithData:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int *)_deserializeValues:(unsigned int)a0 error:(id *)a1;
- (const char *)copyDeserializedNullTerminatedBytesWithError:(id *)a0;
- (id)copyDeserializedStringWithError:(id *)a0;
- (id)copyDeserializedStringWithID:(unsigned int)a0 error:(id *)a1;
- (unsigned int)deserialize32WithError:(id *)a0;
- (unsigned long long)deserialize64WithError:(id *)a0;
- (void)skipFields:(unsigned int)a0;

@end

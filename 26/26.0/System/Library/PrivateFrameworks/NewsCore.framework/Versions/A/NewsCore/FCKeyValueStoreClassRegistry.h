@interface FCKeyValueStoreClassRegistry : NSObject {
    struct unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>, std::allocator<std::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> { struct __hash_table<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::hash<int>, std::equal_to<NTPBKeyValuePair_ValueType>>, std::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, std::equal_to<NTPBKeyValuePair_ValueType>, std::hash<int>>, std::allocator<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _registry;
}

- (void)registerClass:(Class)a0;
- (id)init;
- (id).cxx_construct;
- (Class)classForValueType:(int)a0;
- (void).cxx_destruct;

@end

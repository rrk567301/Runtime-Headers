@interface VZVirtioConsolePortArray : NSObject {
    struct unordered_map<unsigned long, VZVirtioConsolePort *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, VZVirtioConsolePort *>>> { struct __hash_table<std::__hash_value_type<unsigned long, VZVirtioConsolePort *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, VZVirtioConsolePort *>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, VZVirtioConsolePort *>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, VZVirtioConsolePort *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, VZVirtioConsolePort *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, VZVirtioConsolePort *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, VZVirtioConsolePort *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, VZVirtioConsolePort *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _ports;
}

@property (readonly) unsigned int maximumPortCount;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

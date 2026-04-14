@class NSNumber;

@interface VZVirtioConsolePortConfigurationArray : NSObject <NSCopying> {
    NSNumber *_customMaximumPortCount;
    struct unordered_map<unsigned long, VZVirtioConsolePortConfiguration *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, VZVirtioConsolePortConfiguration *>>> { struct __hash_table<std::__hash_value_type<unsigned long, VZVirtioConsolePortConfiguration *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, VZVirtioConsolePortConfiguration *>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, VZVirtioConsolePortConfiguration *>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, VZVirtioConsolePortConfiguration *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, VZVirtioConsolePortConfiguration *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, VZVirtioConsolePortConfiguration *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, VZVirtioConsolePortConfiguration *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, VZVirtioConsolePortConfiguration *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _ports;
}

@property unsigned int maximumPortCount;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

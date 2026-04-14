@interface WBSDictionaryInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying> {
    struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> { struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _map;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *map;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMap:(const void *)a0;
- (id)initWithMovableMap:(void *)a0;

@end

@interface WBSSetInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying> {
    struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<long long, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _set;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *set;
@property (readonly, nonatomic) unsigned long long count;

- (BOOL)contains:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)description;
- (id)initWithInt64:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithSet:(const void *)a0;
- (void).cxx_destruct;
- (id)commaSeparatedValues;
- (id)initWithMovableSet:(void *)a0;

@end

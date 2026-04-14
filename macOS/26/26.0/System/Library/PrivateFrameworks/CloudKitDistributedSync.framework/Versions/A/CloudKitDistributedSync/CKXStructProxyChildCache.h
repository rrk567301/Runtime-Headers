@class CKXStructProxyBase;

@interface CKXStructProxyChildCache : NSObject {
    struct unordered_map<unsigned long long, CKXProxyBase *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, CKXProxyBase *>>> { struct __hash_table<std::__hash_value_type<unsigned long long, CKXProxyBase *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CKXProxyBase *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CKXProxyBase *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, CKXProxyBase *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CKXProxyBase *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } fieldToProxy;
}

@property (readonly, weak, nonatomic) CKXStructProxyBase *proxy;

- (void)reset;
- (id)initWithProxy:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)structListProxyForListReference:(unsigned long long)a0 mutable:(BOOL)a1;
- (id)structProxyForStructReference:(unsigned long long)a0 mutable:(BOOL)a1;

@end

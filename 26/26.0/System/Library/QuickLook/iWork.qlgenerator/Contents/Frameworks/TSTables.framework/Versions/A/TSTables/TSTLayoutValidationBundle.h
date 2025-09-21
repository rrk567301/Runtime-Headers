@class NSMutableArray;

@interface TSTLayoutValidationBundle : NSObject {
    struct unordered_map<unsigned short, double, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> { struct __hash_table<std::__hash_value_type<unsigned short, double>, std::__unordered_map_hasher<unsigned short, std::__hash_value_type<unsigned short, double>, std::hash<unsigned short>, std::equal_to<unsigned short>>, std::__unordered_map_equal<unsigned short, std::__hash_value_type<unsigned short, double>, std::equal_to<unsigned short>, std::hash<unsigned short>>, std::allocator<std::__hash_value_type<unsigned short, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned short, double>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _columnToWidth;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *widthHeightCollections;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTableInfo:(id)a0;
- (void)cacheWidth:(double)a0 ofColumn:(unsigned short)a1;
- (id)generateWidthHeightCollection;
- (double)widthOfColumn:(unsigned short)a0 handleCacheMissUsingBlock:(id /* block */)a1;

@end

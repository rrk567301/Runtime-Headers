@class GEOFlyoverRegionVersions;

@interface _GEOFlyoverRegionVersionMap : NSObject {
    GEOFlyoverRegionVersions *_versions;
    struct unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _regionToIndex;
}

- (id)initWithData:(id)a0;
- (void)enumerateFlyoverRegions:(id /* block */)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFlyoverRegions:(id)a0;
- (struct GEOFlyoverRegion { unsigned int x0; unsigned int x1; unsigned int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)regionForID:(unsigned int)a0;

@end

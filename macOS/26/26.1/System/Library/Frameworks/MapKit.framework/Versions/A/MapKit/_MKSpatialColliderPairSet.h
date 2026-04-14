@interface _MKSpatialColliderPairSet : NSObject {
    struct unordered_set<_MKAnnotationViewPair, std::hash<_MKAnnotationViewPair>, std::equal_to<_MKAnnotationViewPair>, std::allocator<_MKAnnotationViewPair>> { struct __hash_table<_MKAnnotationViewPair, std::hash<_MKAnnotationViewPair>, std::equal_to<_MKAnnotationViewPair>, std::allocator<_MKAnnotationViewPair>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<_MKAnnotationViewPair, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _pairs;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

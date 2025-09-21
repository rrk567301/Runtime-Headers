@interface VNCVPixelBufferPoolManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _poolsLock;
    struct unordered_map<apple::vision::BufferSizeFormat, __CVPixelBufferPool *, std::hash<BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>, std::allocator<std::pair<const apple::vision::BufferSizeFormat, __CVPixelBufferPool *>>> { struct __hash_table<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::__unordered_map_hasher<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::hash<BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>>, std::__unordered_map_equal<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::equal_to<apple::vision::BufferSizeFormat>, std::hash<BufferSizeFormat>>, std::allocator<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _pools;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

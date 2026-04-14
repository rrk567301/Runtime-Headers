@class NSMutableArray;
@protocol MTLResidencySet, MTLBuffer;

@interface GPUDebugRetainedReportingData : NSObject

@property struct vector<MetalBuffer, std::allocator<MetalBuffer>> { struct MetalBuffer *__begin_; struct MetalBuffer *__end_; struct MetalBuffer *__cap_; } usedBuffers;
@property id<MTLResidencySet> cbResidencySet;
@property NSMutableArray *cbAllocations;
@property id<MTLBuffer> privateData;
@property struct unordered_map<unsigned int, NSString *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, NSString *>>> { struct __hash_table<std::__hash_value_type<unsigned int, NSString *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } encoderLabels;
@property NSMutableArray *usedPipelineStates;

- (void)dealloc;
- (id).cxx_construct;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)addUsedBuffer:(struct MetalBuffer { struct MetalBufferHeap *x0; unsigned int x1; })a0;
- (void)setEncoderLabelForIndex:(id)a0 encoderIndex:(unsigned int)a1;

@end

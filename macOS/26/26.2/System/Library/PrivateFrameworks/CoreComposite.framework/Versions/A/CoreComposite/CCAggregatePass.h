@class , CCRenderContext, MTLRenderPassDescriptor, __end_;
@protocol MTLTexture;

@interface CCAggregatePass : CCSimplePass {
    struct vector<CCPass *, std::allocator<CCPass *>> { __end_ **__begin_;  **x0; struct { id *__cap_; } x1; } _executablePasses;
    struct realtime_vector<CCDirectPassHandle> { struct CCDirectPassHandle *__begin_; struct CCDirectPassHandle *__end_; struct { struct CCDirectPassHandle *__cap_; } ; } _executablePassHandles;
    struct unordered_map<std::string, CCResource *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, CCResource *>>> { struct __hash_table<std::__hash_value_type<std::string, CCResource *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, CCResource *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, CCResource *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, CCResource *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCResource *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCResource *>, void *> *> *>>> { struct { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCResource *>, void *> *> *>> { struct { unsigned long long __size_; } ; } __deleter_; } ; } __bucket_list_; struct { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, CCResource *>, void *> *> { void *__next_; } __first_node_; } ; struct { unsigned long long __size_; } ; struct { float __max_load_factor_; } ; } __table_; } _aggregatedResources;
    id<MTLTexture> _internalMTLResources[8];
    long long _imageBlockLength;
    CCRenderContext *_renderContext;
    MTLRenderPassDescriptor *_renderPassDescriptor;
}

- (void)build;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)addPass:(id)a0;
- (void)addPasses:(const void *)a0;
- (void)generateDirectPasses;
- (void)mergeAggregatePass:(id)a0 mergeAtEnd:(BOOL)a1;
- (void)postBuild;
- (void)reallocateWithDeviceGroup:(id)a0 key:(const char *)a1;
- (void)sortPasses;

@end

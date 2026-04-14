@class MTLLegacySVImageData;

@interface MTLLegacySVFunction : MTLToolsFunction {
    MTLLegacySVImageData *data;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _argumentLayoutsMutex;
    struct unordered_map<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>>> { struct __hash_table<std::__hash_value_type<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, std::unique_ptr<LegacySVArgumentEncoderLayout>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _argumentLayouts;
}

+ (id)convertUserType:(id)a0;
+ (id)internalArrayTypeFromUserArrayType:(id)a0;
+ (id)internalStructTypeFromUserStructType:(id)a0;

- (void)dealloc;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;
- (id).cxx_construct;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (void).cxx_destruct;
- (void)_initImageData;
- (id)initWithFunction:(id)a0 library:(id)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2 binaryArchives:(id)a3;
- (void)prepareForBinaryFunctionUsage;
- (void)prepareForComputePipelineUsage;
- (void)prepareForRenderPipelineUsage;

@end

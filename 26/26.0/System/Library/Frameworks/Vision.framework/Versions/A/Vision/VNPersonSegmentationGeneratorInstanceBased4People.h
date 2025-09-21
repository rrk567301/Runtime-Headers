@class NSArray;

@interface VNPersonSegmentationGeneratorInstanceBased4People : VNSegmentationGenerator {
    struct unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> { struct __hash_table<std::__hash_value_type<NSString *, espresso_buffer_t>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, espresso_buffer_t>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _espressoConfidencesOutputBuffer;
}

@property (class, readonly, copy) NSArray *outputMaskBlobNames;
@property (class, readonly, copy) NSArray *outputConfidenceBlobNames;

+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelPathForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (BOOL)inputMaskRequired;
+ (id)outputMaskBlobNameToRequestKey;
+ (BOOL)rotateImageToMatchNetworkOrientation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)bindOutputConfidenceBuffersAndReturnError:(id *)a0;
- (BOOL)validateMaskForBlobName:(id)a0 options:(id)a1 maskConfidence:(float *)a2 maskAcceptable:(BOOL *)a3 error:(id *)a4;

@end

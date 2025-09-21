@class NSString, NSSet;

@interface ANSTBaseNetworkEspresso : NSObject {
    NSString *_netPath;
    NSString *_netFileName;
    struct unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>> { struct __hash_table<std::__hash_value_type<std::string, espresso_buffer_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, espresso_buffer_t>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _outputBufferMap;
    struct unordered_map<std::string, __CVBuffer *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, __CVBuffer *>>> { struct __hash_table<std::__hash_value_type<std::string, __CVBuffer *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, __CVBuffer *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _outputPixelBufMap;
    struct unordered_map<std::string, espresso_buffer_t, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t>>> { struct __hash_table<std::__hash_value_type<std::string, espresso_buffer_t>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, espresso_buffer_t>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, espresso_buffer_t>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, espresso_buffer_t>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _input_espresso_buffer;
    BOOL _isPrepared;
}

@property (readonly, nonatomic) void *context;
@property (readonly, nonatomic) void *plan;
@property (readonly, nonatomic) struct { void *plan; int network_index; } network;
@property (readonly, nonatomic) long long engineType;
@property (readonly, nonatomic) int planPriority;
@property (readonly, nonatomic) NSString *networkResolution;
@property (readonly, nonatomic) BOOL useManagedBuffers;
@property (readonly, nonatomic) NSSet *disabledOutputSet;

- (void)dealloc;
- (BOOL)prepare;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithNetworkEngine:(long long)a0 qualityOfService:(unsigned int)a1 networkName:(id)a2 networkFileName:(id)a3 networkResolution:(id)a4;
- (BOOL)bindNetworkInputWithEspressoBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 withInputName:(id)a1;
- (BOOL)bindNetworkInputWithImage:(struct __CVBuffer { } *)a0 withInputName:(id)a1;
- (BOOL)bindNetworkOutput:(const char *)a0;
- (BOOL)buildPlan;
- (void)cleanUpOutputPixelBufferMap;
- (BOOL)getBlobDimensionByName:(const char *)a0 andDestination:(unsigned long long *)a1;
- (struct CGSize { double x0; double x1; })getResolutionByBlobName:(const char *)a0;
- (struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)getTensorByName:(const char *)a0;
- (BOOL)initContext;
- (BOOL)initMLNetwork;
- (BOOL)initNetwork;
- (BOOL)initNetworkOutput;
- (BOOL)initPlan;
- (id)initWithNetworkEngine:(long long)a0 qualityOfService:(unsigned int)a1 networkName:(id)a2;
- (id)initWithNetworkEngine:(long long)a0 qualityOfService:(unsigned int)a1 networkName:(id)a2 networkFileName:(id)a3;
- (id)initWithNetworkEngine:(long long)a0 qualityOfService:(unsigned int)a1 networkName:(id)a2 networkResolution:(id)a3;
- (BOOL)runNetwork;
- (BOOL)setInput:(id)a0 fromCVPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)updateOutputBlobMap;

@end

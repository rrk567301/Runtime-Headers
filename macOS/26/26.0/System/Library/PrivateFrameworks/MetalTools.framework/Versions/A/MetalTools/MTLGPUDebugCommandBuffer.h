@class MTLGPUDebugDevice, MTLGPUDebugCommandQueue, __cap_, __end_;
@protocol MTLResidencySet, MTLArgumentEncoder, MTLLogState, MTLBuffer;

@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder> {
    BOOL _initialized;
    struct Options { unsigned int x0; int x1; int x2; int x3; unsigned int x4; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; unsigned char x37 : 1; } x5; } *_options;
    struct GPUDebugDeviceOptions { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } *_deviceOptions;
    id<MTLArgumentEncoder> _stageArgumentEncoder;
    struct vector<MetalBuffer, std::allocator<MetalBuffer>> { struct MetalBuffer *__begin_; struct MetalBuffer *__end_; struct MetalBuffer *__cap_; } _usedBuffers;
    struct MetalBuffer { struct MetalBufferHeap *heap; unsigned int index; } _currentPooledBuffer;
    unsigned long long _currentPooledBufferOffset;
    struct vector<MTLGPUDebugBuffer *, std::allocator<MTLGPUDebugBuffer *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _usedBytesBuffers;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _usedBytesBuffersLock;
    unsigned int _currentEncoderID;
    struct unordered_map<unsigned int, NSString *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, NSString *>>> { struct __hash_table<std::__hash_value_type<unsigned int, NSString *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, NSString *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, NSString *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _encoderLabels;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _allocationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tempBufLock;
    BOOL _supportsTileStage;
    BOOL _supportsMeshStage;
    id<MTLBuffer> _internalBindingTables[5];
    struct BufferUsageTable { id<MTLBuffer> _backingMemory; id<MTLResidencySet> _residencySet; } _bufferUsageTables[4];
    struct TextureUsageTable { id<MTLBuffer> _backingMemory; id<MTLResidencySet> _residencySet; } _textureUsageTables[4];
    struct TextureTypeTable { id<MTLBuffer> _backingMemory; id<MTLResidencySet> _residencySet; } _textureTypeTables[4];
    struct HeapUsageTable { unsigned long long _heapUsage; struct vector<HeapUsageTable::HeapUsageTableEntry, std::allocator<HeapUsageTable::HeapUsageTableEntry>> { struct HeapUsageTableEntry *__begin_; struct HeapUsageTableEntry *__end_; struct HeapUsageTableEntry *__cap_; } _heapEntries; } _heapUsageTable;
    struct unordered_map<unsigned long, MTLGPUDebugResidencySet *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, MTLGPUDebugResidencySet *>>> { struct __hash_table<std::__hash_value_type<unsigned long, MTLGPUDebugResidencySet *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, MTLGPUDebugResidencySet *>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, MTLGPUDebugResidencySet *>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, MTLGPUDebugResidencySet *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, MTLGPUDebugResidencySet *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, MTLGPUDebugResidencySet *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, MTLGPUDebugResidencySet *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, MTLGPUDebugResidencySet *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _residencySets;
    struct unordered_map<unsigned long, (anonymous namespace)::EncoderResourceUsage, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, (anonymous namespace)::EncoderResourceUsage>>> { struct __hash_table<std::__hash_value_type<unsigned long, (anonymous namespace)::EncoderResourceUsage>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, (anonymous namespace)::EncoderResourceUsage>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, (anonymous namespace)::EncoderResourceUsage>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, (anonymous namespace)::EncoderResourceUsage>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, (anonymous namespace)::EncoderResourceUsage>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, (anonymous namespace)::EncoderResourceUsage>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, (anonymous namespace)::EncoderResourceUsage>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, (anonymous namespace)::EncoderResourceUsage>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _encodersResourceUsage;
    id<MTLLogState> _reportLogState;
    MTLGPUDebugCommandQueue *_commandQueue;
}

@property unsigned int numDispatches;
@property (readonly) MTLGPUDebugDevice *device;

- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (void)dealloc;
- (id)accelerationStructureCommandEncoderWithDescriptor:(id)a0;
- (void)useResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)computeCommandEncoderWithDescriptor:(id)a0;
- (id)blitCommandEncoderWithDescriptor:(id)a0;
- (id)computeCommandEncoder;
- (id)accelerationStructureCommandEncoder;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)useResidencySet:(id)a0;
- (void)_addUsedBuffer:(id)a0;
- (void)_setInternalBindingTables:(id)a0 type:(unsigned long long)a1;
- (void)_checkReportBuffers;
- (void)_decodeReportLogState:(id)a0;
- (id)_internalBindingTableForStage:(unsigned long long)a0;
- (void)_lateInit;
- (struct pair<id<MTLBuffer>, unsigned long> { id x0; unsigned long long x1; })_temporaryBufferWithLength:(unsigned long long)a0;
- (void)addResidencySetGPUDebug:(id)a0 fromEncoder:(id)a1;
- (void)beginingEncoder:(id)a0 type:(unsigned long long)a1;
- (id)blitCommandEncoder;
- (void)encodeResourceTableBuffers:(id)a0 type:(unsigned long long)a1;
- (void)endingEncoder:(id)a0 type:(unsigned long long)a1;
- (id)initWithCommandBuffer:(id)a0 commandQueue:(id)a1 descriptor:(id)a2;
- (void)markBuffer:(id)a0 usage:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)markHeap:(id)a0 stages:(unsigned long long)a1;
- (void)markHeap:(id)a0 usage:(unsigned long long)a1 stages:(unsigned long long)a2;
- (void)markTexture:(unsigned long long)a0 usage:(unsigned long long)a1 stages:(unsigned long long)a2;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)a0;
- (void)preCommit;
- (void)preCompletionHandlers;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (int)resourceUsageForTexture:(id)a0 stage:(unsigned long long)a1;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (id)temporaryBufferWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)temporaryBufferWithLength:(unsigned long long)a0;

@end

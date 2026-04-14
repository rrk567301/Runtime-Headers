@class NSMutableDictionary, NSDictionary, NSString, NSError, MTLResourceList;
@protocol MTLCommandQueue, MTLDevice, MTLLogContainer;

@interface MTLSimCommandBuffer : _MTLCommandBuffer <MTLCommandBufferSPI, MTLSerializerCommandStream> {
    struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *commandHead;
    struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *bufferHead;
    unsigned long long segmentCount;
    struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *commandCurrentStorage;
    struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *commandTail;
    struct StorageEntry { unsigned long long x0; void *x1; id x2; struct StorageEntry *x3; } *commandPrevious;
    struct BufferStorageEntry { id x0; unsigned long long x1; struct BufferStorageEntry *x2; } *bufferCurrentStorage;
    unsigned long long currentStorageOffset;
    BOOL continuation;
    unsigned int _reference;
    unsigned long long _protectionOptions;
    MTLResourceList *_resourceList;
}

@property (readonly) unsigned int commandBufferRef;
@property (readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long globalTraceObjectID;
@property (nonatomic) BOOL sharedIndirectionTable;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) BOOL retainedReferences;
@property (readonly) unsigned long long errorOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLLogContainer> logs;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ splitHandler;

- (void)dealloc;
- (void)endEncoding;
- (BOOL)commitAndWaitUntilSubmitted;
- (id)blitCommandEncoder;
- (id)computeCommandEncoder;
- (id)resourceStateCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)a0;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (id)computeCommandEncoderWithDescriptor:(id)a0;
- (id)blitCommandEncoderWithDescriptor:(id)a0;
- (id)resourceStateCommandEncoderWithDescriptor:(id)a0;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;
- (void)addPurgedResource:(id)a0;
- (void)addPurgedHeap:(id)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (unsigned long long)protectionOptions;
- (void)merge:(id)a0;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1;
- (void)split;
- (void *)getCommandBufferBytes:(unsigned long long)a0;
- (BOOL)addStateReference:(id)a0;
- (void *)getCommandBytes:(unsigned long long)a0 forCommand:(unsigned int)a1;
- (BOOL)addResourceReference:(id)a0 isWrite:(BOOL)a1;
- (void *)getBufferBytes:(unsigned long long)a0 alignment:(unsigned long long)a1 buffer:(id *)a2 offset:(unsigned long long *)a3;
- (void)beginContinuation;

@end

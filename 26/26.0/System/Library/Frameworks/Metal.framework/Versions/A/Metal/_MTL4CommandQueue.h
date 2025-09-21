@class NSString, NSObject;
@protocol MTLDevice, MTL4CommandBuffer, MTLCommandQueue, OS_dispatch_queue;

@interface _MTL4CommandQueue : _MTLObjectWithLabel <MTL4CommandQueueGGDSPI> {
    NSObject<OS_dispatch_queue> *_submissionQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mlCommandQueueLock;
    id<MTLCommandQueue> _mlCommandQueue;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) int backgroundTrackingPID;
@property (readonly, nonatomic) id<MTL4CommandBuffer> lastCommittedCommandBuffer;
@property (readonly, nonatomic) unsigned long long lastCommittedCommandBufferGeneration;
@property (readonly) id<MTLCommandQueue> mlCommandQueue;
@property (readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySet:(id)a0;
- (void)removeResidencySet:(id)a0;
- (void)addInternalResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)addResidencySet:(id)a0;
- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)addInternalResidencySet:(id)a0;
- (void)signalDrawable:(id)a0;
- (void)commit:(const id *)a0 count:(unsigned long long)a1;
- (void)commit:(const id *)a0 count:(unsigned long long)a1 options:(id)a2;
- (void)copyBufferMappingsFromBuffer:(id)a0 toBuffer:(id)a1 operations:(const struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; } *)a2 count:(unsigned long long)a3;
- (void)copyTextureMappingsFromTexture:(id)a0 toTexture:(id)a1 operations:(const struct { struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x0; unsigned long long x1; unsigned long long x2; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x3; unsigned long long x4; unsigned long long x5; } *)a2 count:(unsigned long long)a3;
- (unsigned int)preCommit:(const id *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (id)preCommit:(const id *)a0 count:(unsigned long long)a1 options:(id)a2;
- (void)signalEvent:(id)a0 value:(unsigned long long)a1;
- (void)updateBufferMappings:(id)a0 heap:(id)a1 operations:(const struct { unsigned long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; unsigned long long x2; } *)a2 count:(unsigned long long)a3;
- (void)updateTextureMappings:(id)a0 heap:(id)a1 operations:(const struct { unsigned long long x0; struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a2 count:(unsigned long long)a3;
- (void)waitForDrawable:(id)a0;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned short)a2;
- (id)initWithDescriptor:(id)a0 device:(id)a1;

@end

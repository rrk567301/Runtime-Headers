@class NSString, NSMutableArray;
@protocol MTLDevice, MTL4CommandBuffer;

@interface MTL4ToolsCommandQueue : MTLToolsObject <MTL4CommandQueueGGDSPI> {
    NSMutableArray *_addedResidencySets;
    id<MTL4CommandBuffer> _lastCommittedCommandBuffer;
}

@property (readonly) NSString *label;
@property (readonly, nonatomic) id<MTL4CommandBuffer> lastCommittedCommandBuffer;
@property (readonly, nonatomic) unsigned long long lastCommittedCommandBufferGeneration;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)removeResidencySet:(id)a0;
- (void)addResidencySet:(id)a0;
- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)signalDrawable:(id)a0;
- (id)addedResidencySets;
- (void)commit:(const id *)a0 count:(unsigned long long)a1;
- (void)commit:(const id *)a0 count:(unsigned long long)a1 options:(id)a2;
- (void)commit:(const id *)a0 count:(unsigned long long)a1 options:(id)a2 preprocessHandler:(id /* block */)a3;
- (void)copyBufferMappingsFromBuffer:(id)a0 toBuffer:(id)a1 operations:(const struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; } *)a2 count:(unsigned long long)a3;
- (void)copyTextureMappingsFromTexture:(id)a0 toTexture:(id)a1 operations:(const struct { struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x0; unsigned long long x1; unsigned long long x2; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x3; unsigned long long x4; unsigned long long x5; } *)a2 count:(unsigned long long)a3;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)signalEvent:(id)a0 value:(unsigned long long)a1;
- (void)updateBufferMappings:(id)a0 heap:(id)a1 operations:(const struct { unsigned long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; unsigned long long x2; } *)a2 count:(unsigned long long)a3;
- (void)updateTextureMappings:(id)a0 heap:(id)a1 operations:(const struct { unsigned long long x0; struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a2 count:(unsigned long long)a3;
- (void)waitForDrawable:(id)a0;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned short)a2;

@end

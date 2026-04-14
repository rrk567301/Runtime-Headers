@class GTMTLReplaySharedResourcePool, NSMutableArray;
@protocol MTLCommandQueue, MTLCommandBuffer, MTLCommandEncoder;

@interface GTMTLReplaySharedBlitBuffer : NSObject {
    struct SharedBufferArray { GTMTLReplaySharedResourcePool *resourcePool; NSMutableArray *retainArray; unsigned long long bufferOffset; } _bufferArray;
    struct SharedCommandBuffer { id<MTLCommandQueue> commandQueue; id<MTLCommandBuffer> commandBuffer; id<MTLCommandEncoder> commandEncoder; struct GTMTLCoreSync *sync; } _commandBuffer;
    struct GTMTLCoreSync { id x0; _Atomic unsigned long long x1; } *_sync;
}

- (void)dealloc;
- (id)accelerationStructureCommandEncoder;
- (id)commandBuffer;
- (void).cxx_destruct;
- (id)blitCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (BOOL)commitCommandBuffer;
- (void)releaseBuffer;
- (id)resourcePool;
- (BOOL)_commitCommandBufferWithLog:(id)a0 sync:(struct GTMTLCoreSync { id x0; _Atomic unsigned long long x1; } *)a1;
- (id)bufferWithLength:(unsigned long long)a0 alignment:(unsigned long long)a1;
- (void)clearCommandBuffer;
- (id)commitCommandBufferAndWait;
- (id)commitCommandBufferAndWaitWithLog:(id)a0;
- (BOOL)commitCommandBufferWithExternalSync:(struct GTMTLCoreSync { id x0; _Atomic unsigned long long x1; } *)a0;
- (BOOL)commitCommandBufferWithLog:(id)a0;
- (id)initWithCommandQueue:(id)a0 resourcePool:(id)a1 sync:(struct GTMTLCoreSync { id x0; _Atomic unsigned long long x1; } *)a2;

@end

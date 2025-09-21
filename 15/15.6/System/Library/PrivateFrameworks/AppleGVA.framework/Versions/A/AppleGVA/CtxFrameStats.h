@protocol MTLCommandBuffer, MTLTexture, MTLBuffer, MTLComputePipelineState, MTLFunction, MTLDevice, MTLLibrary, MTLCommandQueue;

@interface CtxFrameStats : NSObject

@property (retain) id<MTLDevice> device;
@property (retain) id<MTLCommandQueue> commandQueue;
@property (retain) id<MTLComputePipelineState> pipeState;
@property (retain) id<MTLLibrary> mtlLibrary;
@property (retain) id<MTLFunction> kernel;
@property (retain) id<MTLTexture> srcCur;
@property (retain) id<MTLTexture> srcPrev;
@property (retain) id<MTLBuffer> dest;
@property (retain) id<MTLBuffer> args;
@property struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerGroup;
@property struct { unsigned long long width; unsigned long long height; unsigned long long depth; } numThreadgroups;
@property (retain) id<MTLCommandBuffer> commandBuffer;
@property int width;
@property int height;
@property int scdBlockCountHrz;
@property int scdBlockCountVrt;
@property unsigned int *destHost;
@property unsigned int *argsHost;
@property struct { struct __IOSurface *x0; unsigned int x1; id x2; unsigned int x3; } *texturePool;
@property int missCount;
@property int hitCount;

- (void).cxx_destruct;
- (void)waitForComplete;
- (void)deleteMetalContext;
- (void)execute:(struct __IOSurface { } *)a0 prevBuffer:(struct __IOSurface { } *)a1 syncMode:(BOOL)a2;
- (id)init:(int)a0 height:(int)a1 metalId:(unsigned long long)a2 metalIdIsValid:(BOOL)a3;
- (void *)returnDestination;
- (int)returnNumberOfBlocks;

@end

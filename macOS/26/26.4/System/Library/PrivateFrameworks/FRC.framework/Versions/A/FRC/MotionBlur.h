@class NSObject;
@protocol MTLComputePipelineState, MTLDevice, OS_os_log, MTLLibrary, MTLCommandQueue, MTLPipelineLibrarySPI;

@interface MotionBlur : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    float _timeScale;
    int _tileSize;
    int _searchRange;
    id<MTLComputePipelineState> _tileMaxVelocityKernel;
    id<MTLComputePipelineState> _neighborMaxVelocityKernel;
    id<MTLComputePipelineState> _flowToVelocityKernel;
    NSObject<OS_os_log> *_logger;
}

- (void).cxx_destruct;
- (id)computePipelineStateFor:(id)a0 withConstants:(id)a1;
- (void)computeVelocityMapWithDisplacement:(id)a0 outVelocity:(id)a1 outNeighborMaxVelocity:(id)a2 tileMax:(id)a3;
- (void)encodeNeighborMaxFlowWithCommandBuffer:(id)a0 tileMax:(id)a1 searchRange:(int)a2 neighborMax:(id)a3;
- (void)encodeTileMaxVelocityWithCommandBuffer:(id)a0 velocity:(id)a1 tileSize:(int)a2 tileMax:(id)a3;
- (void)encodeVelocityForMotionBlurWithCommandBuffer:(id)a0 displacement:(id)a1 velocity:(id)a2 timeScale:(float)a3 tileSize:(int)a4 searchRange:(int)a5;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 library:(id)a2 pipelineLibrary:(id)a3 timeScale:(float)a4 tileSize:(int)a5 searchRange:(int)a6;

@end

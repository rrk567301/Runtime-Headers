@interface GSRenderer : NSObject

@property (nonatomic) struct shared_ptr<apple3dgs::Renderer> { struct Renderer *__ptr_; struct __shared_weak_count *__cntrl_; } impl;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createRenderPassDescriptorForColorTarget:(id)a0 depthTarget:(id)a1 colorIntermediate:(id)a2 depthIntermediate:(id)a3 rasterizationRateMap:(id)a4 error:(id *)a5;
- (id)createRenderPassDescriptorForColorTarget:(id)a0 depthTarget:(id)a1 rasterizationRateMap:(id)a2 error:(id *)a3;
- (BOOL)encodeSplatting:(id)a0 withSorter:(id)a1 renderPassDescriptor:(id)a2 renderDescriptor:(id)a3 error:(id *)a4;
- (id)initWithDevice:(id)a0 colorPixelFormat:(unsigned long long)a1 depthPixelFormat:(unsigned long long)a2 error:(id *)a3;
- (id)initWithDevice:(id)a0 colorPixelFormat:(unsigned long long)a1 depthPixelFormat:(unsigned long long)a2 sampleCount:(unsigned long long)a3 error:(id *)a4;

@end

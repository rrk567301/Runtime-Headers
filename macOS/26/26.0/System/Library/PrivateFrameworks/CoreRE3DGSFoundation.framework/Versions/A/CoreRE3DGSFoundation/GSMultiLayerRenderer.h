@interface GSMultiLayerRenderer : NSObject

@property (nonatomic) struct shared_ptr<apple3dgs::MultiLayerRenderer> { struct MultiLayerRenderer *__ptr_; struct __shared_weak_count *__cntrl_; } impl;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorPixelFormat:(unsigned long long)a1 depthPixelFormat:(unsigned long long)a2;
- (id)initWithDevice:(id)a0 convertMXIOption:(id)a1 colorPixelFormat:(unsigned long long)a2 depthPixelFormat:(unsigned long long)a3 error:(id *)a4;
- (BOOL)renderMultiLayerWith:(id)a0 asset:(id)a1 convertMXIOption:(id)a2 multiLayerCallback:(id /* block */)a3 error:(id *)a4;
- (BOOL)startWarmupThread:(id)a0 multiLayerCallback:(id /* block */)a1 error:(id *)a2;
- (BOOL)stopWarmupThread;

@end

@class NSMutableArray, VFXWorld, VFXRenderer, VFXNode, VFXDrawCall;

@interface VFXREWorldSimulation : NSObject {
    VFXWorld *_world;
    VFXRenderer *_renderer;
    VFXDrawCall *_transientDrawCall;
    struct __CFXRenderingOverride { } *_transientPass;
    double _systemTime;
    struct unique_ptr<VFXMTLRenderCommandEncoder, std::default_delete<VFXMTLRenderCommandEncoder>> { struct VFXMTLRenderCommandEncoder *__ptr_; } _commandEncoder;
    struct unique_ptr<CFX::BufferAllocatorPerFrame, std::default_delete<CFX::BufferAllocatorPerFrame>> { struct BufferAllocatorPerFrame *__ptr_; } _frameBufferAllocator;
    NSMutableArray *_secondaryPovs;
}

@property (readonly, nonatomic) VFXWorld *world;
@property (readonly, nonatomic) VFXNode *pointOfView;

- (id)initWithCommandQueue:(id)a0;
- (void)endFrame;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setWorld:(id)a0;
- (void)updateWithDeltaTime:(double)a0;
- (unsigned long long)addCollisionPlaneWithExtents:(SEL)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)addSecondaryPointOfView:(id)a0;
- (void)beginFrameWithEncoder:(id)a0 frameIndex:(unsigned long long)a1;
- (void)enumerateDrawCallsForNode:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateSecondaryPointOfViewsUsingBlock:(id /* block */)a0;
- (void)prepareDrawCalls;
- (id /* block */)recycleBuffersGetCompletion;
- (void)removeCollisionPlane:(unsigned long long)a0;
- (void)removeSecondaryPointOfView:(id)a0;
- (void)updateCollisionPlane:(unsigned long long)a0 collideOutsideExtents:(BOOL)a1;
- (void)updateCollisionPlane:(SEL)a0 extents:(unsigned long long)a1 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (BOOL)wantsCollisionPlanes;
- (id)_sceneForCollisionPlanes;

@end

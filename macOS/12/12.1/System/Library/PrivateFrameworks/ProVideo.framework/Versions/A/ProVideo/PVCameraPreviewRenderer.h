@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject {
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } _renderManager;
    struct HGRef<HGRenderJob> { struct HGRenderJob *m_Obj; } _currentRenderJob;
    PVVideoCompositingContext *_compositingContext;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct HGRef<HGGLContext> { struct HGGLContext *x0; })rootContext;
- (struct HGRef<PVRenderManager> { struct PVRenderManager *x0; })renderManager;
- (void)enqueueRenderRequest:(id)a0 completion:(id /* block */)a1;

@end

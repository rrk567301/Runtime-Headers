@class VSTControllerConnection;
@protocol MTLDevice;

@interface VSTProxyRenderer : NSObject {
    struct optional<vst::splat::ProxyRenderer::CreateInfo> { union { char __null_state_; struct CreateInfo { id<MTLDevice> device; int primitive; int technique; int colorMode; int depthMode; int depthQuality; int layout; unsigned long long shOrder; unsigned long long colorPixelFormat; unsigned long long depthPixelFormat; unsigned long long gridDepthPixelFormat; unsigned long long numViews; unsigned long long maxNumVolumes; struct CreateOptions { BOOL createIOSurfaceBackedResources; } splattingOptions; struct CreateOptions { int packingMethod; int splatColorSpace; unsigned long long numBatches; BOOL reduceTileRenderingRegion; BOOL useVertexAmplification; BOOL useEarlyZTesting; BOOL useOverdrawLimit; BOOL recordMaxVisibilityContribution; BOOL useCustomParams; BOOL failOnBinaryArchiveMiss; BOOL renderBack; BOOL generateProxyMesh; } rendererOptions; } __val_; } ; BOOL __engaged_; } _createInfo;
    struct unique_ptr<vst::splat::ProxyRenderer, std::default_delete<vst::splat::ProxyRenderer>> { struct { struct ProxyRenderer *__ptr_; } ; } _proxyRenderer;
    struct unique_ptr<vst::api::RecordingState, std::default_delete<vst::api::RecordingState>> { struct { struct RecordingState *__ptr_; } ; } _recordingState;
    struct ProxyRendererCreateOptions { struct optional<vst::splat::shared::Primitive> { union { char __null_state_; int __val_; } ; BOOL __engaged_; } primitive; struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } shOrder; struct optional<unsigned long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } numBatches; struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } useVertexAmplification; struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } reduceTileRenderingRegion; struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } useEarlyZTesting; struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } generateProxyMesh; } _createOverrides;
    VSTControllerConnection *_controllerConnection;
}

- (id)initWithInfo:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)updateWithInfo:(id)a0;
- (id)renderTargetDescriptorWithInfo:(id)a0;
- (id)proxyBuffersDescriptorWithInfo:(id)a0;
- (BOOL)_recreateProxyRendererIfNeededWithOverrides:(const void *)a0;
- (BOOL)cullWithInfo:(id)a0;
- (BOOL)drawWithInfo:(id)a0;
- (id)renderTargetDescriptorWithResolutionOptions:(id)a0 extents:(id)a1;
- (id)renderTargetDescriptorWithScreenSize:(SEL)a0;
- (id)renderTargetDescriptorWithScreenSize:(SEL)a0 gridTileSize:(long long)a1;

@end

@class NSData, VFXRenderer, VFXRenderOptions;

@interface VFXRemoteRendererProxy : NSObject <VFXRemoteRendererXPCProtocol> {
    VFXRenderer *_decoder;
    VFXRenderOptions *_renderOptions;
    NSData *_lastFrame;
}

@property (readonly, nonatomic) VFXRenderer *decoder;
@property (readonly, nonatomic) NSData *lastFrame;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)newFrame:(id)a0 index:(long long)a1;
- (void)destroyBufferWithRemoteID:(id)a0;
- (void)destroyTextureWithRemoteID:(id)a0;
- (void)handShakeWithObject:(id)a0 reply:(id /* block */)a1;
- (void)newBuffer:(id)a0 remoteID:(id)a1;
- (void)newTexture:(id)a0 remoteID:(id)a1;

@end

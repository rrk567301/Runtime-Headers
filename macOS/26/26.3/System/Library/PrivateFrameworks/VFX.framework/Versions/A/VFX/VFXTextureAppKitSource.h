@class CALayer, NSWindow, NSView;

@interface VFXTextureAppKitSource : VFXTextureCoreAnimationSource {
    BOOL _windowReady;
    NSView *_nsView;
    struct CGSize { double width; double height; } _sizeCache;
    unsigned int _textureID;
    struct __CFXEngineContext { } *_engineContext;
    struct { unsigned char minFilter : 8; unsigned char magFilter : 8; unsigned char mipFilter : 8; unsigned char sAddressMode : 8; unsigned char tAddressMode : 8; unsigned char rAddressMode : 8; unsigned char compareFunction : 8; unsigned char maxAnisotropy : 7; unsigned char supportArgumentBuffers : 1; } _textureSampler;
}

@property (retain, nonatomic) NSWindow *nsWindow;
@property (retain, nonatomic) CALayer *nsWindowLayer;
@property (retain, nonatomic) id source;
@property (nonatomic) BOOL isOpaque;

- (id)layer;
- (void)setup;
- (void)dealloc;
- (float)clearValue;
- (double)layerContentsScaleFactor;
- (struct CGSize { double x0; double x1; })layerSizeInPixels;
- (id)layerToFocusForRenderedLayer:(id)a0;
- (BOOL)requiresMainThreadUpdates;
- (BOOL)shouldFlip;
- (BOOL)supportsMetal;
- (void)_layerTreeDidUpdate;
- (void)setNSView:(id)a0;
- (BOOL)usesBoundsInPixels;

@end

@class CALayer;

@interface VFXAppKitSource : VFXImageSource {
    id _nsView;
    CALayer *_nsWindowLayer;
    BOOL _isOpaque;
    BOOL _windowPreparing;
}

@property (retain, nonatomic) id nsWindow;

- (BOOL)isOpaque;
- (void)dealloc;
- (id)init;
- (BOOL)supportsMetal;
- (id)textureSource;
- (id)prepareWindowIfNeeded;
- (void)setNSView:(id)a0;

@end

@class CALayer;

@interface VFXAppKitSource : VFXImageSource {
    id _nsView;
    CALayer *_nsWindowLayer;
    char _isOpaque;
    char _windowPreparing;
}

@property (retain, nonatomic) id nsWindow;

- (void)dealloc;
- (id)init;
- (char)isOpaque;
- (char)supportsMetal;
- (id)textureSource;
- (id)prepareWindowIfNeeded;
- (void)setNSView:(id)a0;

@end

@class MTLRenderPassDescriptor, NSString, SCNRenderer, AVTAvatar, AVTRenderer;
@protocol MTLCommandQueue;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    AVTRenderer *_renderer;
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct CGContext { } *_bitmapContext;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (readonly, nonatomic) SCNRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct CGImage { } *)copyRescaledCGImage:(struct CGImage { } *)a0 by:(float)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_applyOptions:(id)a0;
- (void)setupAvatarWithOptions:(id)a0 useACopy:(BOOL)a1;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2 useACopy:(BOOL)a3;
- (id)animatedImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (id)animatedImageDataWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;

@end

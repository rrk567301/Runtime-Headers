@class AVTSnapshotHelper, AVTRenderer, SCNRenderer, AVTAvatar;

@interface AVTSnapshotBuilder : NSObject {
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    AVTRenderer *_renderer;
    AVTSnapshotHelper *_snapshotHelper;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (readonly, nonatomic) SCNRenderer *renderer;

+ (id)sharedInstance;
+ (struct CGImage { } *)copyRescaledCGImage:(struct CGImage { } *)a0 by:(float)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_applyOptions:(id)a0;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2 useACopy:(BOOL)a3;
- (id)animatedImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (void)setupAvatarWithOptions:(id)a0 useACopy:(BOOL)a1;
- (id)animatedImageDataWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;

@end

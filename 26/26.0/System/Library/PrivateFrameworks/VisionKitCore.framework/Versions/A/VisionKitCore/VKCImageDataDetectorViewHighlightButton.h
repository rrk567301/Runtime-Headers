@class NSImageView;

@interface VKCImageDataDetectorViewHighlightButton : VKPlatformView

@property (retain, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSImageView *blurImageView;
@property (nonatomic) double rotation;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)wantsLayer;
- (id)blurImage:(id)a0 withRadius:(double)a1;

@end

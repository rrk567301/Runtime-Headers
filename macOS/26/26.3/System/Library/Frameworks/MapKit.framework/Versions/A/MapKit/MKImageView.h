@class NSImage, NSImageView, NSColor;

@interface MKImageView : NSView {
    NSImage *_currentImage;
}

@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSImageView *imageView;
@property (retain, nonatomic) NSImage *highlightImage;
@property (retain, nonatomic) NSColor *highlightColor;
@property (nonatomic) BOOL shouldHighlight;
@property (nonatomic, setter=_mapkit_setImageContentMode:) long long _mapkit_imageContentMode;
@property (retain, nonatomic) NSColor *templateTintColor;

- (void)setBackgroundStyle:(long long)a0;
- (void)sizeToFit;
- (id)initWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_currentImage;
- (void)_maps_common_init;
- (void)_setCurrentImage:(id)a0;
- (void)invalidateHighlightImage;

@end

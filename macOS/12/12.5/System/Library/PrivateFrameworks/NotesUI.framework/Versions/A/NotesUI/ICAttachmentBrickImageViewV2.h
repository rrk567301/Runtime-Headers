@class CALayer, NSImage;

@interface ICAttachmentBrickImageViewV2 : NSView

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL transparentBackground;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCornerRadius:(double)a0;
- (void)setContentsScale:(double)a0;
- (double)cornerRadius;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)updateBackgroundColor;
- (void)updateSublayersBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

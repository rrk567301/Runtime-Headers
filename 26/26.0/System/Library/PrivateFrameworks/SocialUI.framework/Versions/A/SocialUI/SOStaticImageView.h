@class NSImage;

@interface SOStaticImageView : NSView

@property (retain, nonatomic) NSImage *image;
@property BOOL imageIsOpaque;

- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)_commonSOStaticImageViewInit;

@end

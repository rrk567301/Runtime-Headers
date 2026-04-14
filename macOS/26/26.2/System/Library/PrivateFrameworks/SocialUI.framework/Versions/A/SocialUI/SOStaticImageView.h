@class NSImage;

@interface SOStaticImageView : NSView

@property (retain, nonatomic) NSImage *image;
@property BOOL imageIsOpaque;

- (id)initWithCoder:(id)a0;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void).cxx_destruct;
- (void)viewDidChangeBackingProperties;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)_commonSOStaticImageViewInit;

@end

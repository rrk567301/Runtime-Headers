@class NSImage;

@interface SOStaticImageView : NSView

@property (retain, nonatomic) NSImage *image;
@property BOOL imageIsOpaque;

- (void)updateLayer;
- (BOOL)isOpaque;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)wantsUpdateLayer;
- (void)_commonSOStaticImageViewInit;

@end

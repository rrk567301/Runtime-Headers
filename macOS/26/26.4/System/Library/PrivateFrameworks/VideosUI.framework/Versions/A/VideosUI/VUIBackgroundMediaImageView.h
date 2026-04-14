@class NSImage, VUIImageView, VUIImageProxy;

@interface VUIBackgroundMediaImageView : VUIBaseView

@property (retain, nonatomic) VUIImageView *imageView;
@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) VUIImageProxy *imageProxy;
@property (retain, nonatomic) VUIImageView *quoteImageView;

+ (void)layoutQuoteView:(id)a0 inContainer:(id)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)createQuoteImageView;
- (void)setVuiContentMode:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end

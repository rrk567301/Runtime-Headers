@interface FadingScrollView : NSScrollView

@property (nonatomic) BOOL fadingClipViewInstalled;
@property (readonly, nonatomic) Class clipViewClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reflectScrolledClipView:(id)a0;
- (void)awakeFromNib;
- (void)_installFadingContentView;

@end

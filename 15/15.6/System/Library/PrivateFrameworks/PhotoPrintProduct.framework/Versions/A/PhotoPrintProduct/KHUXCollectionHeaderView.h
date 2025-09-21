@class NSColor, CAShapeLayer;

@interface KHUXCollectionHeaderView : UXCollectionReusableView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (readonly, nonatomic) char wasShowingFooterLine;
@property (retain, nonatomic) NSColor *defaultBackgroundColor;
@property (nonatomic) double footerLineInset;
@property (nonatomic) char showFooterLine;
@property (nonatomic) char showBlurBackground;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)updateLayer;
- (char)wantsUpdateLayer;
- (void)_updateFooterLine;

@end

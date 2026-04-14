@class NSColor, CAShapeLayer;

@interface KHUXCollectionHeaderView : UXCollectionReusableView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (readonly, nonatomic) BOOL wasShowingFooterLine;
@property (retain, nonatomic) NSColor *defaultBackgroundColor;
@property (nonatomic) double footerLineInset;
@property (nonatomic) BOOL showFooterLine;
@property (nonatomic) BOOL showBlurBackground;

- (BOOL)isOpaque;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)_updateFooterLine;

@end

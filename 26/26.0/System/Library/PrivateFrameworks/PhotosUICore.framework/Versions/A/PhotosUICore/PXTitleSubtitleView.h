@class NSTextField, PXGTitleSubtitleViewConfiguration;

@interface PXTitleSubtitleView : NSView <PXGReusableView> {
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    double _titleLineHeight;
    double _subtitleLineHeight;
    double _interLabelSpacing;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
}

@property (copy, nonatomic) PXGTitleSubtitleViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)becomeReusable;

@end

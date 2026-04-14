@class SearchUIImageView, NSView, TLKProminenceView, SFColor, SFImage, SearchUIGradientView;
@protocol SearchUIBackgroundColorViewProtocol;

@interface SearchUIBackgroundColorView : NSView

@property (retain) NSView *platterView;
@property (retain) TLKProminenceView *prominenceView;
@property (retain) SearchUIGradientView *gradientView;
@property (retain) SearchUIGradientView *gradientViewMaskView;
@property (retain) SearchUIGradientView *colorBlendView;
@property (retain) SearchUIImageView *backgroundImageView;
@property (nonatomic) BOOL showsPlaceholderPlatterView;
@property (nonatomic) unsigned long long maskedCorners;
@property (retain, nonatomic) SFColor *color;
@property (retain, nonatomic) SFImage *backgroundImage;
@property (weak, nonatomic) id<SearchUIBackgroundColorViewProtocol> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)tlks_setCornerRadius:(double)a0 withStyle:(id)a1;
- (void)updateAppearance:(id)a0 withColors:(id)a1;
- (void)updateWithSFCard:(id)a0;
- (id)viewsToOverrideAppearance;

@end

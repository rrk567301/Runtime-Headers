@class NSString, NSView, TLKProminenceView, SFColor, SearchUIGradientView;
@protocol SearchUIBackgroundColorViewProtocol;

@interface SearchUIBackgroundColorView : NSView <NSCollectionViewElement>

@property (retain) NSView *platterView;
@property (retain) TLKProminenceView *prominenceView;
@property (retain) SearchUIGradientView *gradientView;
@property (retain) SearchUIGradientView *gradientViewMaskView;
@property (retain) SearchUIGradientView *colorBlendView;
@property (retain) TLKProminenceView *highlightView;
@property (retain, nonatomic) SFColor *color;
@property (nonatomic) BOOL needsTintForReadability;
@property (nonatomic) BOOL showsPlaceholderPlatterView;
@property (nonatomic) BOOL highlighted;
@property (weak, nonatomic) id<SearchUIBackgroundColorViewProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

+ (void)updateAppearance:(id)a0 forViews:(id)a1 withColors:(id)a2;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)layout;
- (void)applyLayoutAttributes:(id)a0;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)tlks_setCornerRadius:(double)a0 withStyle:(id)a1;
- (void)tlk_updateForAppearance:(id)a0;
- (id)viewsToOverrideAppearance;

@end

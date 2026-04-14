@class NSView, NSString, NSVisualEffectView;

@interface VUINSNavigationBarBackgroundView : NSView <VUINSNavigationBarLargeTitleUpdating>

@property (retain, nonatomic) NSView *separatorView;
@property (readonly, nonatomic) NSView *solidFillView;
@property (readonly, nonatomic) NSVisualEffectView *visualEffectFillView;
@property (nonatomic) BOOL wantsLargeTitleOcclusion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigationBarBackgroundColor;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (void)vui_traitCollectionDidChange:(id)a0;
- (id)_solidFillBackgroundColor;
- (long long)_visualEffectMaterial;
- (void)hideLargeTitle;
- (void)revealLargeTitle;

@end

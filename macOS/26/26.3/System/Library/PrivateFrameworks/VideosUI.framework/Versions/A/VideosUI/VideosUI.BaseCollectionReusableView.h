@interface VideosUI.BaseCollectionReusableView : NSView <VUINSTraitEnvironment, NSCollectionViewElement>

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (void)layout;
- (id)initWithCoder:(id)a0;

@end

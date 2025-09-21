@interface VideosUI.BaseCollectionReusableView : NSView <VUINSTraitEnvironment, NSCollectionViewElement>

@property (nonatomic, readonly) char flipped;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } fittingSize;

- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)viewDidChangeEffectiveAppearance;

@end

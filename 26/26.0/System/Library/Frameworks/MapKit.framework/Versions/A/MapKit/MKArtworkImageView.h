@class NSColor, MKImageView;
@protocol MKArtworkImageSource;

@interface MKArtworkImageView : MKImageView {
    MKImageView *_cachedBadgeView;
}

@property (readonly, nonatomic) MKImageView *badgeView;
@property (retain, nonatomic) id<MKArtworkImageSource> imageSource;
@property (retain, nonatomic) NSColor *primaryTintColor;
@property (retain, nonatomic) NSColor *secondaryTintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)_updateImageView;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;

@end

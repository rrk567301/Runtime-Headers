@class SearchUIBackgroundColorView, TLKProminenceView, NSString;

@interface SearchUIBackgroundColorSupplementaryView : NSView <NSCollectionViewElement>

@property (retain, nonatomic) SearchUIBackgroundColorView *colorView;
@property (retain, nonatomic) TLKProminenceView *highlightView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) unsigned long long maskedCorners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)isFlipped;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)tlks_setCornerRadius:(double)a0 withStyle:(id)a1;

@end

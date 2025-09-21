@class NSImage;

@interface GameCenterUI.PagingButton : GameCenterUI.ClickableView <NSCollectionViewElement> {
    void /* function */ actionBlock;
    void /* unknown type, empty encoding */ arrowView;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ arrowCenterY;
}

@property (class, nonatomic, readonly) NSImage *paginationArrowR;
@property (class, nonatomic, readonly) NSImage *paginationArrowL;
@property (class, nonatomic, readonly) NSImage *paginationHighlightArrowR;
@property (class, nonatomic, readonly) NSImage *paginationHighlightArrowL;
@property (class, nonatomic, readonly) double trackingBoundsInsetX;

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isHighlighted;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackingBounds;

+ (double)widthWithLayoutMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;

- (void)mouseUp:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)layout;
- (void)applyLayoutAttributes:(id)a0;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)performClick:(id)a0;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;

@end

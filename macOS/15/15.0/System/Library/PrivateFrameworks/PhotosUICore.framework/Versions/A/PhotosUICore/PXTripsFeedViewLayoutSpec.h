@class NSColor, NSShadow, NSFont, PXScrollBehavior;

@interface PXTripsFeedViewLayoutSpec : PXFeatureSpec <PXFeedViewLayoutSpec>

@property (readonly, nonatomic) long long feedAxis;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) double feedInteritemSpacing;
@property (readonly, nonatomic) PXScrollBehavior *scrollBehavior;
@property (readonly, nonatomic) BOOL wantsScrollIndicators;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } horizontalScrollIndicatorInsets;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } verticalScrollIndicatorInsets;
@property (readonly, nonatomic) BOOL wantsSafeAreaInsets;
@property (readonly, nonatomic) BOOL wantsFirstItemFullscreen;
@property (readonly, nonatomic) double overlayFeedPeekDistance;
@property (readonly, nonatomic) BOOL wantsItemHoverEvents;
@property (readonly, nonatomic) double itemCornerRadius;
@property (readonly, nonatomic) NSShadow *itemShadow;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } viewOutsets;
@property (nonatomic) BOOL isFullScreen;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } subtitleInsets;
@property (readonly, nonatomic) NSFont *subtitleFont;
@property (readonly, nonatomic) NSColor *subtitleColor;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } placeholderMargins;
@property (readonly, nonatomic) long long rootLayoutOrientation;
@property (readonly, nonatomic) BOOL allowsAutoplayContent;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_feedInteritemSpacingForReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })gadgetSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)layoutGeneratorWithReferenceSize:(struct CGSize { double x0; double x1; })a0;

@end

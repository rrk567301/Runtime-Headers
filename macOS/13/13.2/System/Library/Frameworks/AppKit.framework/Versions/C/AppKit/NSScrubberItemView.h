@interface NSScrubberItemView : NSScrubberArrangedView {
    unsigned char _edge : 2;
}

@property (retain) id selectionBackgroundView;
@property (retain) id selectionOverlayView;
@property (retain) id leftMaskLayer;
@property (retain) id rightMaskLayer;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)createTouchBarColorListPickerSelectionOverlayView;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (id)accessibilitySelectedAttribute;
- (id)accessibilityIndexAttribute;
- (id)_accessibilityScrubber;
- (long long)accessibilityRawIndex;
- (void)setAccessibilityRawIndex:(long long)a0;
- (BOOL)_hasCustomSelectionViews;
- (void)_setIsLeftmost:(BOOL)a0 isRightmost:(BOOL)a1;
- (void)_isLeftmost:(BOOL *)a0 isRightmost:(BOOL *)a1;
- (void)_setSelected:(BOOL)a0 highlighted:(BOOL)a1;
- (void)_updateCornersWithSelectionRadius:(double)a0 defaultEndcapRadius:(double)a1;
- (void)_clearMaskLayers;
- (void)_createMaskLayersIfNeeded;
- (void)_layoutMaskLayers;

@end

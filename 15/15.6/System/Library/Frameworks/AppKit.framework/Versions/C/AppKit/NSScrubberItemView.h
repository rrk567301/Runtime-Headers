@interface NSScrubberItemView : NSScrubberArrangedView {
    unsigned char _edge : 2;
}

@property (retain) id selectionBackgroundView;
@property (retain) id selectionOverlayView;
@property (retain) id leftMaskLayer;
@property (retain) id rightMaskLayer;

+ (id)createTouchBarColorListPickerSelectionOverlayView;
+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)accessibilityActionDescription:(id)a0;
- (id)_accessibilityScrubber;
- (void)_clearMaskLayers;
- (void)_createMaskLayersIfNeeded;
- (char)_hasCustomSelectionViews;
- (void)_isLeftmost:(char *)a0 isRightmost:(char *)a1;
- (void)_layoutMaskLayers;
- (void)_setIsLeftmost:(char)a0 isRightmost:(char)a1;
- (void)_setSelected:(char)a0 highlighted:(char)a1;
- (void)_updateCornersWithSelectionRadius:(double)a0 defaultEndcapRadius:(double)a1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityIndexAttribute;
- (char)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (long long)accessibilityRawIndex;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySelectedAttribute;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityRawIndex:(long long)a0;
- (void)viewDidChangeEffectiveAppearance;

@end

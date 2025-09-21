@class NSArray, NSString, NSToolbarClippedItemsIndicator, NSToolbarPlatterView, NSPortalView, NSToolbarView;

@interface NSToolbarClippedItemsIndicatorViewer : NSView <NSToolbarViewLayoutItem> {
    BOOL _needsModeConfiguration;
    struct CGSize { double width; double height; } _minSize;
    unsigned long long _displayMode;
    NSToolbarClippedItemsIndicator *_clippedItemsIndicator;
    NSPortalView *_portalView;
    NSToolbarView *_toolbarView;
    NSToolbarPlatterView *_associatedPlatter;
}

@property (copy) NSArray *clippedItems;
@property (readonly) BOOL hasItemsToDisplayInPopUp;
@property (setter=_setNeedsModeConfiguration:) BOOL _needsModeConfiguration;
@property BOOL animatingIn;
@property BOOL animatingOut;
@property (readonly) BOOL alwaysWantsOverflowTransitions;
@property (readonly) BOOL participatesInOverflow;
@property (readonly) unsigned long long itemPosition;
@property (readonly) BOOL isGroup;
@property BOOL inGlassSidebar;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) BOOL isSpace;
@property (readonly) long long priorityIndex;
@property (readonly) BOOL wantsToBeCentered;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) BOOL isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isVisible;
@property (readonly) unsigned long long glassBehavior;
@property (readonly) BOOL isNavigational;
@property (readonly) NSArray *subitems;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } glassBackedViewRectInSelf;
@property (weak) NSToolbarPlatterView *associatedPlatter;
@property (getter=isFirstItemInGlassGroup) BOOL firstItemInGlassGroup;
@property (getter=isLastItemInGlassGroup) BOOL lastItemInGlassGroup;

+ (BOOL)isItemShownInPopupIfSoleEntry:(id)a0;
+ (BOOL)isMenuItemValidForDisplayInPopUp:(id)a0;
+ (BOOL)willHaveItemsToDisplayForItemViewers:(id)a0;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)dealloc;
- (void)layout;
- (id)init;
- (id)tintColor;
- (void).cxx_destruct;
- (void)animateIntoView;
- (void)_addPortalViewToPlatter;
- (void)_applyScaleInAnimation;
- (void)_applyScaleOutAnimation;
- (void)_beginToolbarEditingMode;
- (void)_endToolbarEditingMode;
- (id)_nextResponderForEvent:(id)a0;
- (void)_removePortalViewFromPlatter;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_scale3DAffineTransformForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_syncPortalFrame;
- (void)animateOutOfView;
- (id)clippedItemsIndicator;
- (void)configureForLayoutInDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1 inToolbarView:(id)a2;
- (id)declaredLayoutConstraints;
- (void)decrementVisibilityCount;
- (void)incrementVisibilityCount;
- (BOOL)isBordered;
- (BOOL)isSelectable;

@end

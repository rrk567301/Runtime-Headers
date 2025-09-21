@class NSArray, NSString, NSToolbarClippedItemsIndicator, NSToolbarView;

@interface NSToolbarClippedItemsIndicatorViewer : NSView <NSToolbarViewLayoutItem> {
    char _needsModeConfiguration;
    struct CGSize { double width; double height; } _minSize;
    unsigned long long _displayMode;
    NSToolbarClippedItemsIndicator *_clippedItemsIndicator;
    NSToolbarView *_toolbarView;
}

@property (copy) NSArray *clippedItems;
@property (readonly) char hasItemsToDisplayInPopUp;
@property (setter=_setNeedsModeConfiguration:) char _needsModeConfiguration;
@property (readonly) char alwaysWantsOverflowTransitions;
@property (readonly) char participatesInOverflow;
@property (readonly) unsigned long long itemPosition;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) char isSpace;
@property (readonly) long long priorityIndex;
@property (readonly) char wantsToBeCentered;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) char isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isItemShownInPopupIfSoleEntry:(id)a0;
+ (char)isMenuItemValidForDisplayInPopUp:(id)a0;
+ (char)willHaveItemsToDisplayForItemViewers:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)animateIntoView;
- (void)_applyScaleInAnimation;
- (void)_applyScaleOutAnimation;
- (void)_beginToolbarEditingMode;
- (void)_endToolbarEditingMode;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_scale3DAffineTransformForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)animateOutOfView;
- (id)clippedItemsIndicator;
- (void)configureForLayoutInDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1 inToolbarView:(id)a2;
- (id)declaredLayoutConstraints;
- (void)decrementVisibilityCount;
- (void)incrementVisibilityCount;

@end

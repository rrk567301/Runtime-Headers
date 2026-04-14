@class NSString, NSView, NSTrackingArea;

@interface NSPopupMenuWindow : NSWindow <NSWindowDelegate> {
    NSView *_parentItem;
    NSTrackingArea *_trackingArea;
    struct CGPoint { double x; double y; } _offset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _parentBounds;
    long long _themeMenuType;
    BOOL _shouldUseOffsets;
    BOOL _ignoresMulticolorAccent;
    BOOL _forceR2L;
    BOOL _isDismissalCanceled;
}

@property (nonatomic) BOOL isWindowClosing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;
+ (id)_allowedRunLoopModesForToolTips;

- (void)dealloc;
- (unsigned long long)_flags;
- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)_contentView;
- (BOOL)_ignoreForFullScreenTransition;
- (void)keyDown:(id)a0;
- (void)resignKeyWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (unsigned long long)shadowOptions;
- (BOOL)accessibilityIsChildOfApp;
- (BOOL)_hasActiveControls;
- (id)_contentViewController;
- (id)_cornerMask;
- (BOOL)_usesRightToLeftLayout;
- (void)_setVisible:(BOOL)a0;
- (void)setAlphaValue:(double)a0;
- (BOOL)ignoresMulticolorAccent;
- (void)setIgnoresMulticolorAccent:(BOOL)a0;
- (BOOL)_allowsActiveInputContextDuringMenuTracking;
- (BOOL)canHide;
- (void)_updateMouseMovedState;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 animate:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enableFlushWindow;
- (id)initWithViewController:(id)a0;
- (BOOL)_allowsOrdering;
- (id)_effectiveMaskImage;
- (id)_parentItemContentViewController;
- (unsigned long long)_privateFlags;
- (BOOL)_shouldGetCornerMaskFromVisualEffectView;
- (void)_removePresentationTimerIfExists;
- (void)presentAsSubmenuRelativeToView:(id)a0 animated:(BOOL)a1 fromParentBoundsInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withDelay:(BOOL)a3;
- (void)presentAsPullDownRelativeToView:(id)a0 animated:(BOOL)a1 fromParentBoundsInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)presentAsPopUpRelativeToView:(id)a0 animated:(BOOL)a1;
- (BOOL)_viewsNeedLayout;
- (void)_commonPresentFromView:(id)a0 animated:(BOOL)a1;
- (void)_orderFrontWithParentWindow:(id)a0;
- (void)recalculateKeyViewLoop;
- (void)closeAnimated:(BOOL)a0;
- (void)updateWindowFrameTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAnimation:(BOOL)a1;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_popUpMenuDidRequestRepositioningWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popupFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 preferredY:(double *)a2 focusedItemOffset:(struct CGPoint { double x0; double x1; })a3 parentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popUpWithCalloutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 menuSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicableParentBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pullDownFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)themeMenuTitleOffset:(BOOL)a0;
- (id)_currentScreenByFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_submenuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_positionSubmenuHorizontally:(long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 allowingOverlap:(BOOL)a4;
- (double)_positionSubmenuVerticallyInAvailableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 mustAlignWithParent:(BOOL)a2 inParentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (BOOL)_ignoreForFullScreenTransitionSnapshot;
- (void)_enableFlushWindowWithoutPerformingFlush;

@end

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

+ (id)_allowedRunLoopModesForToolTips;
+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)_flags;
- (void)resignKeyWindow;
- (BOOL)_allowsOrdering;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pullDownFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canHide;
- (BOOL)_allowsActiveInputContextDuringMenuTracking;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicableParentBounds;
- (void)_commonPresentFromView:(id)a0 animated:(BOOL)a1;
- (id)_contentView;
- (id)_contentViewController;
- (id)_cornerMask;
- (id)_currentScreenByFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_effectiveMaskImage;
- (void)_enableFlushWindowWithoutPerformingFlush;
- (BOOL)_hasActiveControls;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_ignoreForFullScreenTransitionSnapshot;
- (void)_orderFrontWithParentWindow:(id)a0;
- (id)_parentItemContentViewController;
- (void)_popUpMenuDidRequestRepositioningWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popUpWithCalloutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 menuSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_popupFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 preferredY:(double *)a2 focusedItemOffset:(struct CGPoint { double x0; double x1; })a3 parentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (double)_positionSubmenuHorizontally:(long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 allowingOverlap:(BOOL)a4;
- (double)_positionSubmenuVerticallyInAvailableBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 mustAlignWithParent:(BOOL)a2 inParentItemBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (unsigned long long)_privateFlags;
- (void)_removePresentationTimerIfExists;
- (void)_setVisible:(BOOL)a0;
- (BOOL)_shouldGetCornerMaskFromVisualEffectView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_submenuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateMouseMovedState;
- (BOOL)_usesRightToLeftLayout;
- (BOOL)_viewsNeedLayout;
- (BOOL)accessibilityIsChildOfApp;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closeAnimated:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enableFlushWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
- (BOOL)ignoresMulticolorAccent;
- (id)initWithViewController:(id)a0;
- (void)keyDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)presentAsPopUpRelativeToView:(id)a0 animated:(BOOL)a1;
- (void)presentAsPullDownRelativeToView:(id)a0 animated:(BOOL)a1 fromParentBoundsInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)presentAsSubmenuRelativeToView:(id)a0 animated:(BOOL)a1 fromParentBoundsInWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withDelay:(BOOL)a3;
- (void)recalculateKeyViewLoop;
- (void)setAlphaValue:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 animate:(BOOL)a2;
- (void)setIgnoresMulticolorAccent:(BOOL)a0;
- (unsigned long long)shadowOptions;
- (int)themeMenuTitleOffset:(BOOL)a0;
- (void)updateWindowFrameTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAnimation:(BOOL)a1;

@end

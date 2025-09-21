@class NSView, NSStatusItem, NSStatusBarContentView, NSLayoutConstraint;

@interface NSStatusBarWindow : NSWindow {
    NSStatusItem *_statusItem;
    NSStatusBarContentView *_windowContentView;
    NSView *_itemContentView;
    NSView *_statusView;
    NSLayoutConstraint *_windowContentViewWidthConstraint;
    NSLayoutConstraint *_windowContentViewHeightConstraint;
    double _internalItemContentPadding;
    NSLayoutConstraint *_itemContentViewDefaultWidthConstraint;
    NSLayoutConstraint *_itemContentViewDefaultHeightConstraint;
    char _variableLength;
    char _selected;
    id _retargetingEventMonitor;
}

@property (readonly, weak) NSStatusItem *statusItem;
@property (readonly) NSView *itemContentView;
@property double externalItemContentPadding;
@property double internalItemContentPadding;
@property double defaultItemLength;
@property char variableLength;
@property double menuBarHeight;
@property char hasCAShadow;

+ (id)keyPathsForValuesAffecting_appearanceForAttachedPopovers;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (char)_canMiniaturize;
- (void)_viewAttaching:(id)a0;
- (char)canHide;
- (id)_appearanceForAttachedPopovers;
- (void)_automateLiveResize;
- (id)_bestScreenByGeometryOfFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 respectingSpaceAssignment:(char)a1;
- (char)_cgsPositionManagedByExternalAgent;
- (char)_hasActiveControls;
- (char)_ignoreForFullScreenTransition;
- (char)_ignoredForScripting;
- (char)_isNonactivatingPanel;
- (void)_lighterViewDetaching:(id)a0;
- (void)_noticeStatusBarVisibilityChangeIfNecessary;
- (void)_orderForwardWithEvent:(id)a0;
- (id)_popoverAppearanceProxy;
- (id)_retargetEventIfNeeded:(id)a0;
- (long long)_semanticContext;
- (void)_setWindowNumber:(long long)a0;
- (void)_setWindowTag;
- (char)_showToolTip;
- (void)_testAndUpdateAllowsFlattening;
- (char)_windowManagerAware;
- (void)_windowMoved:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)accessibilityIsIgnored;
- (void)beginCreationDragWithHitPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (struct CGPoint { double x0; double x1; })convertBaseToScreen:(struct CGPoint { double x0; double x1; })a0;
- (char)hasSelectionRect;
- (id)initForStatusItem:(id)a0;
- (void)sendEvent:(id)a0;
- (void)setSelection:(char)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)setStatusBarView:(id)a0;
- (void)statusViewFrameDidChange:(id)a0;
- (void)viewGeometryInWindowDidChangeNotification:(id)a0;
- (void)viewNeedsDisplayInRectNotification:(id)a0;
- (void *)windowRef;
- (char)worksWhenModal;

@end

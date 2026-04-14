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
    BOOL _variableLength;
    BOOL _selected;
    id _retargetingEventMonitor;
}

@property (readonly, weak) NSStatusItem *statusItem;
@property (readonly) NSView *itemContentView;
@property double externalItemContentPadding;
@property double internalItemContentPadding;
@property double defaultItemLength;
@property BOOL variableLength;
@property double menuBarHeight;
@property BOOL hasCAShadow;

+ (id)keyPathsForValuesAffecting_appearanceForAttachedPopovers;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_automateLiveResize;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityChildrenAttribute;
- (BOOL)_canMiniaturize;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)sendEvent:(id)a0;
- (void *)windowRef;
- (BOOL)worksWhenModal;
- (BOOL)_hasActiveControls;
- (BOOL)_isNonactivatingPanel;
- (BOOL)canHide;
- (long long)_semanticContext;
- (BOOL)_showToolTip;
- (void)statusViewFrameDidChange:(id)a0;
- (void)_setWindowNumber:(long long)a0;
- (void)_windowMoved:(id)a0;
- (struct CGPoint { double x0; double x1; })convertBaseToScreen:(struct CGPoint { double x0; double x1; })a0;
- (void)viewNeedsDisplayInRectNotification:(id)a0;
- (void)viewGeometryInWindowDidChangeNotification:(id)a0;
- (void)_lighterViewDetaching:(id)a0;
- (id)initForStatusItem:(id)a0;
- (id)_appearanceForAttachedPopovers;
- (id)_popoverAppearanceProxy;
- (void)setSelection:(BOOL)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (BOOL)hasSelectionRect;
- (void)_testAndUpdateAllowsFlattening;
- (void)setStatusBarView:(id)a0;
- (id)_bestScreenByGeometryOfFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 respectingSpaceAssignment:(BOOL)a1;
- (void)_noticeStatusBarVisibilityChangeIfNecessary;
- (void)_orderForwardWithEvent:(id)a0;
- (id)_retargetEventIfNeeded:(id)a0;
- (BOOL)_cgsPositionManagedByWindowServer;
- (void)_viewAttaching:(id)a0;
- (void)beginCreationDragWithHitPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_windowManagerAware;

@end

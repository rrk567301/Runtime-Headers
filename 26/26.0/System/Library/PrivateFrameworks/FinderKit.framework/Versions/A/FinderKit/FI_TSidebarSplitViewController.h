@class NSView, FI_TNotificationCenterObserverGlue, NSObject, NSStackView, FI_TSidebarViewController, NSLayoutConstraint, FI_TSplitView, FI_TBrowserViewContainerController, NSSplitViewItem;

@interface FI_TSidebarSplitViewController : NSSplitViewController {
    NSSplitViewItem *_sidebarSplitViewItem;
    FI_TSidebarViewController *_sidebarViewController;
    double _sidebarColumnWidthCache;
    BOOL _snapToOptimalSidebarWidth;
    NSSplitViewItem *_browserSplitViewItem;
    long long _mediaBrowserShownTypes;
    BOOL _bumpedIn;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _sidebarPreferredScrollerStyleObserver;
    BOOL _isSidebarCollapsed;
    BOOL _isExpanded;
    BOOL _isAnimating;
    int _sidebarStateBeforeCollapse;
}

@property (readonly, nonatomic) NSSplitViewItem *sidebarSplitViewItem;
@property (retain) FI_TSplitView *splitView;
@property (readonly, retain) FI_TSidebarViewController *sidebarViewController;
@property (readonly, retain) NSView *browserColumnView;
@property (readonly, retain) FI_TBrowserViewContainerController *browserViewContainerController;
@property (readonly, nonatomic) BOOL isSidebarColumnCollapsed;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;
@property (readonly, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) NSView *topView;
@property (retain, nonatomic) NSView *bottomView;
@property (retain, nonatomic) NSView *pathBar;
@property (readonly, nonatomic) NSLayoutConstraint *pathBarVisibilityConstraint;
@property (retain, nonatomic) NSView *statusBar;
@property (readonly, nonatomic) NSLayoutConstraint *statusBarVisibilityConstraint;

+ (id)keyPathsForValuesAffectingIsSidebarColumnCollapsed;

- (void)updateSidebarVisibility;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setMediaBrowserShownTypes:(unsigned long long)a0;
- (id)splitView;
- (double)splitView:(id)a0 constrainSplitPosition:(double)a1 ofSubviewAt:(long long)a2;
- (void)splitViewDidResizeSubviews:(id)a0;
- (void)unlockOverlayScrollerState;
- (void)aboutToTearDown;
- (void)addBrowserColumnWithContainerLayoutManager:(id)a0;
- (void)addSidebarColumn:(id)a0 containerLayoutManager:(id)a1;
- (void)collapseSidebarColumn;
- (void)createHidingContainerForView:(id)a0 container:(id *)a1 hidingConstraint:(id *)a2;
- (void)expandSidebarColumn;
- (void)hideSidebarOverlayScrollers;
- (BOOL)hidesSharedItems;
- (id)initWithFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 containerLayoutManager:(id)a1 browserContainerController:(id)a2;
- (void)insertArrangedView:(id)a0 afterView:(id)a1;
- (void)lockOverlayScrollersToHiddenState;
- (struct CGImage { } *)newSidebarImageForFullScreenAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (struct CGImage { } *)newSidebarImageForFullScreenAnimationInitialCoverWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)removeNodeFromSidebar:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)removeSidebarColumn;
- (void)saveSidebarColumnWidthToDisk:(double)a0 didUserResizeSidebar:(BOOL)a1;
- (struct TFENode { struct OpaqueNodeRef *x0; })selectedSidebarNode;
- (void)setAnimating:(BOOL)a0 expanded:(BOOL)a1;
- (void)setHidesSharedItems:(BOOL)a0;
- (void)setSidebarColumnCollapsed:(BOOL)a0;
- (void)setSidebarColumnWidth:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sidebarColumnFrameInWindow:(BOOL)a0;
- (id)sidebarColumnView;
- (double)sidebarColumnWidth;
- (double)sidebarOptimalWidth;
- (void)updateAutomaticallyAdjustsSafeAreaInsets:(BOOL)a0;
- (void)updateHoldingPriorities;
- (void)updateSidebarSelectionForCurrentTarget;
- (void)updateSidebarSelectionForTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end

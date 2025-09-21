@class NSStackView, NSObject, FI_TNotificationCenterObserverGlue, NSLayoutConstraint, NSString, FI_TPreviewOptions, FI_TColumnPreviewHeaderViewController, FI_TKeyValueObserverGlue, FI_TContainerLayoutManager, NSIndexSet, NSArray, FI_TColumnPreviewInfoViewController, FI_TColumnPreviewViewController;

@interface FI_TColumnPreviewController : FI_TViewController <TCoalescingNodeObserverProtocol, TTrackingAreaOwnerProtocol, TMarkTornDown> {
    FI_TColumnPreviewViewController *_previewViewController;
    FI_TColumnPreviewHeaderViewController *_headerViewController;
    FI_TColumnPreviewInfoViewController *_infoViewController;
    NSStackView *_stackView;
    NSLayoutConstraint *_metaTitleWidthConstraint;
    NSArray *_viewControllers;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _targetInfoNodes;
    unsigned int _targetInfoNodeNotificationOptions;
    FI_TContainerLayoutManager *_containerLayoutManager;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _contentInsetsDidChangeObserver;
    NSArray *_layoutConstraints;
    NSLayoutConstraint *_minHeightLayoutConstraint;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _clipViewBoundsChangedObserver;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct TNotificationCenterObserver *__cap_; } _notificationCenterObservers;
}

@property (retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (retain, nonatomic) FI_TPreviewOptions *previewOptions;
@property (nonatomic) BOOL inColumnView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

- (void)viewDidMoveToWindow;
- (id).cxx_construct;
- (void)viewDidMoveToSuperview;
- (void)initCommon;
- (void).cxx_destruct;
- (id)nibName;
- (void)aboutToTearDown;
- (void)configureView;
- (id)initWithContainerLayoutManager:(id)a0;
- (const void *)targetInfoNodes;
- (void)coalescingNodeObserver:(void *)a0 aliasesTargetChanged:(const void *)a1;
- (void)coalescingNodeObserver:(void *)a0 bulkNodesChanged:(const void *)a1;
- (void)coalescingNodeObserver:(void *)a0 bulkNodesDeleted:(const void *)a1;
- (void)coalescingNodeObserver:(void *)a0 nodeMDAttributeChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 attributes:(id)a2 isDisplayAttributes:(BOOL)a3;
- (void)coalescingNodeObserver:(void *)a0 nodesGoingAway:(const void *)a1;
- (void)handleNodePropertyChanges:(const void *)a0;
- (void)setBrowserTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)setShowSmallThumbnail:(BOOL)a0;
- (void)setTargetInfoNodes:(const void *)a0;
- (BOOL)shouldShowMagicPocketLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldShowScrollBarsForVisibleHeight:(double)a0;
- (void)updateMinHeightConstraintForView:(id)a0;
- (void)updateQuickActionsPocketInScrollView:(id)a0;
- (void)updateScrollStateForContent;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollView:(id)a0;

@end

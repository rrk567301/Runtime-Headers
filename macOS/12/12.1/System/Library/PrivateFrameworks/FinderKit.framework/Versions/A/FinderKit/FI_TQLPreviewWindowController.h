@class FI_TNotificationCenterObserverGlue, NSString, NSValue, NSObject, QLPreviewPanel;
@protocol TQLPreviewWindowControllerProtocol;

@interface FI_TQLPreviewWindowController : NSObject <QLPreviewPanelDataSource, QLPreviewPanelDelegate, FIAliasResolution, TCoalescingNodeObserverProtocol> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
    struct TNSWeakPtr<NSObject<TQLPreviewWindowControllerProtocol>, void> { NSValue *fWeakObject; } _weakActiveViewController;
    unsigned int _avcRespondsToFlags;
    QLPreviewPanel *_previewPanel;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct shared_ptr<TQLPreviewWindowQTEjectHelper> { struct TQLPreviewWindowQTEjectHelper *__ptr_; struct __shared_weak_count *__cntrl_; } _ejectHelper;
    BOOL _canZoom;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _dateTimeFormattersChangedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _previewPanelWillClosedObserver;
    struct TNSWeakPtr<FI_TRunAfterHelper, void> { NSValue *fWeakObject; } _tearDownToken;
}

@property (weak, nonatomic) NSObject<TQLPreviewWindowControllerProtocol> *activeViewController;
@property (nonatomic) BOOL positionNearPreviewItem;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } overrideNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;
+ (BOOL)panelIsShowing;
+ (BOOL)panelExists;
+ (BOOL)isActiveViewController:(id)a0;
+ (BOOL)quickLookShouldOpenFullscreenWithEvent:(id)a0;
+ (id)quickLookMenuItemTitleForNodes:(const void *)a0 actualCount:(unsigned long long)a1 fullScreen:(BOOL)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reloadData;
- (void)hide;
- (void)beginPreviewPanelControl:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)previewPanel:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (BOOL)previewPanel:(id)a0 handleEvent:(id)a1;
- (BOOL)previewPanel:(id)a0 shouldShowOpenButtonForItem:(id)a1;
- (BOOL)previewPanel:(id)a0 shouldOpenURL:(id)a1 forPreviewItem:(id)a2;
- (BOOL)previewPanel:(id)a0 shouldShowShareButtonForItem:(id)a1;
- (const void *)nodes;
- (void)setNodes:(const void *)a0;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesDeleted:(const void *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesGoingAway:(const void *)a1;
- (id)activeViewController;
- (void)setActiveViewController:(id)a0;
- (id)previewPanel:(id)a0 sharedPreviewViewForPreviewItem:(id)a1;
- (void)removeNodes:(const void *)a0;
- (void)updatePanelConfigurationForBackupBrowser:(BOOL)a0;
- (void)updatePreviewPanel;
- (void)previewPanelWillClose:(id)a0;
- (void)refreshCurrentPreviewNode;
- (void)alias:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 resolvedAs:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 temporaryNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)showFullScreen:(BOOL)a0;
- (void)setCanZoom:(BOOL)a0;
- (void)previewAtIndex:(long long)a0;
- (void)updateDisplayedDates;

@end

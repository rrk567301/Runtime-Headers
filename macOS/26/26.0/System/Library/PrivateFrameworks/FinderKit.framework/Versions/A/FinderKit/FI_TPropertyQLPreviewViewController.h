@class FI_TQLMultiPreviewView, NSString, FI_TQLPreviewViewZoomController, FI_TQLMultiPreviewViewCommonDelegate, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TPropertyQLPreviewViewController : FI_IPropertyValueController <QLPreviewViewDelegate, FIAliasResolution> {
    FI_TQLMultiPreviewView *_multiPreviewView;
    struct shared_ptr<TQLPreviewViewQTEjectHelper> { struct TQLPreviewViewQTEjectHelper *__ptr_; struct __shared_weak_count *__cntrl_; } _ejectHelper;
    FI_TQLPreviewViewZoomController *_zoomController;
    FI_TQLMultiPreviewViewCommonDelegate *_previewViewCommonDelegate;
    struct shared_ptr<TDisableScreenUpdatesInWindow> { struct TDisableScreenUpdatesInWindow *__ptr_; struct __shared_weak_count *__cntrl_; } _previewDrawingSynchronizer;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _timeMachineWillStartObserver;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _previewItemBinder;
}

@property (nonatomic) struct TFENode { struct OpaqueNodeRef *x0; } browserTargetNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setValue:(id)a0;
- (void)refresh;
- (void)dealloc;
- (void)setView:(id)a0;
- (void)flush;
- (id).cxx_construct;
- (void)initCommon;
- (void)stopPlaying;
- (void).cxx_destruct;
- (BOOL)isResizable;
- (void)aboutToTearDown;
- (void)configureView;
- (void)alias:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 resolvedAs:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 temporaryNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)previewView:(id)a0 didShowPreviewItem:(id)a1;
- (void)cancelPreviewDrawingSynchronizer;
- (void)enablePreviewDrawingSynchronizer;
- (void)handleBulkNodesChanged:(const void *)a0 observedNodes:(const void *)a1;
- (void)handleBulkNodesDeleted:(const void *)a0 observedNodes:(const void *)a1;
- (void)handleNodesGoingAway:(const void *)a0;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct TFENode *x2; })previewNodes;
- (BOOL)previewView:(id)a0 acceptDrop:(id)a1 onPreviewItem:(id)a2;
- (id)previewView:(id)a0 customViewForPreviewItem:(id)a1;
- (void)previewView:(id)a0 doubleClickedOnPreviewItem:(id)a1;
- (id)previewView:(id)a0 draggingItemsForPreviewItem:(id)a1;
- (id)previewView:(id)a0 pasteboardWriterForPreviewItem:(id)a1;
- (unsigned long long)previewView:(id)a0 validateDrop:(id)a1 onPreviewItem:(id)a2;
- (void)previewView:(id)a0 willLoadPreviewItem:(id)a1;
- (id)qlPreviewView;
- (void)updateWithNodes:(const void *)a0;

@end

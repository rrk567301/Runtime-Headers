@class FI_TKeyValueObserverGlue, NSString, NSArray, FI_TPathSelectController, FI_TEphemeralPathBarDisplayController, FI_TRunAfterHelper, NSTrackingArea, FI_TPathControl, NSObject, NSIndexSet;
@protocol FI_TPathBarContainerDelegate;

@interface FI_TPathBarController : NSSplitViewItemAccessoryViewController <FI_TPathSelectDelegate, TPathControlDelegate, TNodeObserverProtocol, NSMenuDelegate, TMarkTornDown> {
    FI_TPathControl *_pathControl;
    struct shared_ptr<TNodeObserverCocoaBridge> { struct TNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct TNSWeakPtr<NSObject<FI_TPathBarContainerDelegate>> { NSObject<FI_TPathBarContainerDelegate> *fWeakObject; } _containerDelegate;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _commonPathVector;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _observedSelection;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct TNotificationCenterObserver *__cap_; } _observers;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _effectiveAppearanceObserver;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _refreshToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _singleClickDelayToken;
    NSTrackingArea *_ephemeralMouseOverTrackingArea;
    double _barHeight;
}

@property (readonly, weak) NSObject<FI_TPathBarContainerDelegate> *containerDelegate;
@property (retain, nonatomic) FI_TPathSelectController *pathSelectController;
@property (readonly, nonatomic, getter=isEphemeral) BOOL ephemeral;
@property (readonly, weak, nonatomic) FI_TEphemeralPathBarDisplayController *ephemeralDisplayController;
@property (nonatomic) BOOL trackingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

+ (double)defaultPathBarHeight;

- (void)loadView;
- (void)refresh;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (id).cxx_construct;
- (void)scheduleUpdate;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)configureView;
- (BOOL)commonPathForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 andSelection:(const void *)a1;
- (void)clearCommonPathNodes;
- (void)clearObservedSelection;
- (void)handleSingleClickOnNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 event:(id)a1 cell:(id)a2 pathSelect:(id)a3;
- (id)initWithContainerDelegate:(id)a0;
- (id)initWithEphemeralDisplayController:(id)a0 containerDelegate:(id)a1 height:(struct optional<double> { union { char x0; double x1; } x0; BOOL x1; })a2;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeForCell:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForClickedCell;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeInPathBar:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)nodeObserver:(void *)a0 nodeChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2 property:(unsigned int)a3;
- (void)nodeObserver:(void *)a0 nodeDeleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)pathControlDoubleClick:(id)a0;
- (void)pathControlSingleClick:(id)a0;
- (void)pathSelect:(id)a0 didSelectNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)pathSelectMenuDidClose:(id)a0;
- (BOOL)preflightSelection:(const void *)a0 commonParent:(struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)setTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 selection:(const void *)a1;
- (void)updateEphemeralTrackingArea;
- (void)updatePathComponents;
- (void)updateSelection:(const void *)a0 forceUpdate:(BOOL)a1;

@end

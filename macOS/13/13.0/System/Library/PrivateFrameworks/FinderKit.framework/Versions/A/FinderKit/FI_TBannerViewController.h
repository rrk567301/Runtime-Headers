@class NSButton, NSString, FI_TPopover, FI_TImageView, ICQInAppMessage, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TBannerViewController : FI_TViewController <FPUIActionViewControllerDelegate, TCoalescingNodeObserverProtocol, NSPopoverDelegate> {
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _observedNode;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _finderPrefsChangedObserver;
    NSButton *_learnMoreButton;
    NSButton *_secondButton;
    FI_TImageView *_symbolView;
    ICQInAppMessage *_icqMessage;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic, getter=isButtonEnabled) BOOL buttonEnabled;
@property (retain, nonatomic) FI_TPopover *popover;
@property (copy, nonatomic) NSString *secondButtonTitle;
@property (nonatomic) int type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id).cxx_construct;
- (void)buttonPressed:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)coalescingNodeObserver:(void *)a0 nodesAdded:(const void *)a1 toObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesDeleted:(const void *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 openSyncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)configureView;
- (void)actionControllerDidFinishAction:(id)a0 error:(id)a1;
- (id)initWithBannerType:(int)a0;
- (id)initICQMessage:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })representedNode;
- (void)showCollaborationPopoverOrManageSharedFolder:(id)a0;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })domainBannerName;
- (void)updateBannerState;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })buttonTitleForTrashFolder;
- (void)emptyTrash;
- (void)upgradeToICloudDrive:(BOOL)a0;
- (void)restartFileProviderObservers;
- (void)presentAuthenticationUI;
- (void)startObservingTargetNode;
- (void)stopObservingTargetNode;
- (void)populationChangedInContainerNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end

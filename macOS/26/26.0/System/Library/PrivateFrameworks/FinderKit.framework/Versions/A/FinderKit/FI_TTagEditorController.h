@class FI_TNotificationCenterObserverGlue, NSArray, NSString, NSObject, FI_TTaggingTokenField;

@interface FI_TTagEditorController : FI_TViewController <TCoalescingNodeObserverProtocol> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _nodes;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    NSArray *_originalTagAttributes;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tagRegistryChangedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _didEndEditingObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _forceTokenFieldToCommitObserver;
}

@property (getter=isCanceled) BOOL canceled;
@property (copy, nonatomic) NSArray *tags;
@property (readonly, nonatomic) FI_TTaggingTokenField *taggingTokenField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)nibName;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct TFENode *x2; })nodes;
- (void)setNodes:(const void *)a0;
- (void)configureView;
- (void)applyTagsToNodes;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (id)taggingTokenFieldNoLoad;

@end

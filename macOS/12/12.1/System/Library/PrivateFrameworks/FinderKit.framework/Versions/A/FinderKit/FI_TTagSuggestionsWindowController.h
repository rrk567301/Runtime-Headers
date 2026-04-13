@class FI_TKeyValueObserverGlue, NSString, NSArray, FI_TTaggingTokenField, NSValue, NSObject, FI_TNotificationCenterObserverGlue, NSLayoutConstraint, NSIndexSet;

@interface FI_TTagSuggestionsWindowController : NSWindowController <NSWindowDelegate> {
    struct TNSWeakPtr<FI_TTaggingTokenField, void> { NSValue *fWeakObject; } _weakTaggingTokenField;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tokenFieldFrameInWindowCache;
    BOOL _hideSuggestionsWindowOnMouseUp;
    BOOL _isShowingSuggestionsWindow;
    NSLayoutConstraint *_widthConstraint;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tfWillMoveToWindowObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tfDidMoveToWindowObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tfFrameDidChangeObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tfSuperScrollViewDidScrollObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tfWindowWillCloseObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _tfWindowDidResizeObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _taggingTokenFieldTornDownObserver;
    struct TEventMonitor { NSObject *fEventMonitorToken; } _localEventMonitor;
}

@property (readonly, weak, nonatomic) FI_TTaggingTokenField *taggingTokenField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)windowWillClose:(id)a0;
- (void)updateWindowFrame;
- (id)taggingTokenField;
- (void)hideSuggestionsWindowWithCommit:(BOOL)a0;
- (void)setTaggingTokenField:(id)a0;
- (void)showSuggestionsWindow;
- (id)initWithSuggestionsViewController:(id)a0 taggingTokenField:(id)a1;
- (void)startObservingTokenFieldWindow:(id)a0;
- (id)superScrollView;
- (void)stopObservingTokenFieldWindow;
- (void)tokenFieldFrameMayHaveChanged;
- (id)handleMonitorMouseEventsCallback:(id)a0;
- (void)tokenFieldWillMoveToWindow:(id)a0;
- (void)tokenFieldDidMoveToWindow;
- (void)tokenFieldWindowWillClose;
- (void)tokenFieldWindowFrameChanged:(id)a0;
- (void)superScrollViewDidScroll;
- (void)_postAccessibilityTaggingWindowCreatedNotification;

@end

@class NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TShrinkToFitScrollView : FI_TScrollView {
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _stfTextViewFrameChangedObvserver;
}

- (void)initCommon;
- (void)sizeToFit;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)accessibilityIsIgnored;
- (id)initWithSTFTextView:(id)a0;

@end

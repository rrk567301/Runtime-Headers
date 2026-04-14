@class FI_TNotificationCenterObserverGlue, NSObject, NSValue, FI_TShrinkToFitScrollView, FI_TShrinkToFitTextView;

@interface FI_TShrinkToFitWindow : NSPanel {
    struct TNSWeakPtr<FI_TShrinkToFitScrollView> { NSValue *fWeakObject; } _weakStfScrollView;
    struct TNSWeakPtr<FI_TShrinkToFitTextView> { NSValue *fWeakObject; } _weakStfTextView;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _stfScrollViewFrameChangedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _stfScrollViewPreferredScrollerStyleDidChangeObserver;
}

@property (weak, nonatomic) FI_TShrinkToFitScrollView *stfScrollView;
@property (weak, nonatomic) FI_TShrinkToFitTextView *stfTextView;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)accessibilityIsIgnored;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)sizeToFit;
- (void)_resignKeyFocus;
- (void)undo:(id)a0;
- (BOOL)_canBecomeSecondaryKeyWindow;
- (id)initWithSTFTextView:(id)a0;
- (double)_focusRingThickness;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcGlobalFrame;

@end

@class NSString, NSArray, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_IAirDropStateViewController : FI_TViewController <TMarkTornDown> {
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _viewDidMoveToSuperviewObserver;
    NSArray *_constraints;
}

@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)configureView;

@end

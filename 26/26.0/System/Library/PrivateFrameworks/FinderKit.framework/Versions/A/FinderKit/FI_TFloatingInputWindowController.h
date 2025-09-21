@class NSWindow, NSString, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TFloatingInputWindowController : NSWindowController <NSWindowDelegate> {
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _keyboardInputSourceChangedObserver;
    NSWindow *_windowStash;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleton;

- (void)windowWillClose:(id)a0;
- (void)dealloc;
- (void)setWindow:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithWindow:(id)a0;
- (id)inputContext;
- (BOOL)preProcessedByInputMethod:(id)a0 forDelegate:(id)a1;

@end

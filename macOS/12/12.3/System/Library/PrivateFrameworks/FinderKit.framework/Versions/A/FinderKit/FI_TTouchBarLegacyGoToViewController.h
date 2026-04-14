@class NSValue, FI_TButton, NSObject;
@protocol TTouchBarLegacyGoToViewDelegate;

@interface FI_TTouchBarLegacyGoToViewController : FI_TTouchBarViewController {
    struct TNSWeakPtr<NSObject<TTouchBarLegacyGoToViewDelegate>, void> { NSValue *fWeakObject; } _weakDelegate;
    FI_TButton *_goButton;
    FI_TButton *_cancelButton;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _goTouchBarButtonBinder;
    BOOL tornDown;
}

@property (weak, nonatomic) NSObject<TTouchBarLegacyGoToViewDelegate> *delegate;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (BOOL)isTornDown;
- (void)setTornDown:(BOOL)a0;
- (void)configureView;
- (void)configTouchBarButtons;

@end

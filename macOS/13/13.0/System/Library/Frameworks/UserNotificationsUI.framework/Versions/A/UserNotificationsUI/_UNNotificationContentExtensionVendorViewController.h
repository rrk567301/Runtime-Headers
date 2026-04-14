@class NSString, _UNNotificationContentExtensionVendorSizingView, NSViewController;
@protocol UNNotificationContentExtension;

@interface _UNNotificationContentExtensionVendorViewController : NSServiceViewController <_UNNotificationContentExtensionVendorSizingViewDelegate, _UNNotificationContentExtensionVendorContainer> {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidationOnceFlag;
    _UNNotificationContentExtensionVendorSizingView *_sizingView;
}

@property (retain, nonatomic) NSViewController<UNNotificationContentExtension> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)loadView;
- (void)viewWillLayout;
- (void)preferredContentSizeDidChangeForViewController:(id)a0;
- (void)addChildViewController:(id)a0;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)awakeFromRemoteView;
- (id)_extensionBundleIdentifier;
- (void)notificationExtensionSizingView:(id)a0 requestSizeChange:(struct CGSize { double x0; double x1; })a1 sendRight:(id)a2;
- (void)_invalidateExtensionContext;
- (void)_willAppearInRemoteViewController:(id)a0;
- (id)notificationExtensionVendorContext;
- (void)_setupExtensionViewController:(id)a0;

@end

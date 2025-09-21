@interface VideosUI.DocumentRequestViewController : VideosUI.DocumentViewController {
    void /* unknown type, empty encoding */ viewControllerDocumentIdentifier;
    void /* unknown type, empty encoding */ sendInitialRequestOnViewWillAppear;
    void /* unknown type, empty encoding */ interactorDelegate;
    void /* unknown type, empty encoding */ initialControllerRef;
    void /* unknown type, empty encoding */ initialRequestSent;
    void /* unknown type, empty encoding */ documentOptions;
    void /* unknown type, empty encoding */ documentInteractor;
    void /* unknown type, empty encoding */ documentInteractorObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pagePerformanceReporter;
    void /* unknown type, empty encoding */ requestContext;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (char)handleDeeplink:(id)a0;
- (void)vui_viewDidAppear:(char)a0;
- (void)vui_viewDidDisappear:(char)a0;
- (void)vui_viewWillAppear:(char)a0;
- (void)vui_viewWillDisappear:(char)a0;

@end

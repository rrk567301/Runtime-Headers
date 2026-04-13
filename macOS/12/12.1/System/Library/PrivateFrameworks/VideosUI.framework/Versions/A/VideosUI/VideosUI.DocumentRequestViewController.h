@class NSString;

@interface VideosUI.DocumentRequestViewController : VideosUI.DocumentViewController {
    void /* unknown type, empty encoding */ viewControllerIdentifier;
    void /* unknown type, empty encoding */ staticPPTDocumentFolderPath;
    void /* unknown type, empty encoding */ viewControllerDocumentIdentifier;
    void /* unknown type, empty encoding */ initialControllerRef;
    void /* unknown type, empty encoding */ initialRequestSent;
    void /* unknown type, empty encoding */ inAppBannerAllowed;
    void /* unknown type, empty encoding */ documentOptions;
    void /* unknown type, empty encoding */ documentInteractor;
    void /* unknown type, empty encoding */ documentInteractorObserver;
    void /* unknown type, empty encoding */ requestContext;
    void /* unknown type, empty encoding */ shouldHideLoadingView;
}

@property (nonatomic, readonly) NSString *viewControllerIdentifier;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;

@end

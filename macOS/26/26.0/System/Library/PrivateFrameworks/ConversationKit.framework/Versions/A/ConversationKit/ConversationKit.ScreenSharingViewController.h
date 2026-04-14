@interface ConversationKit.ScreenSharingViewController : PlatformViewController <CNKScreenSharingViewControllerProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ shouldDisableZoom;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sharedContentViewController;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)viewType;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)resetZoom;
- (void)zoomOut;
- (BOOL)canResetZoom;
- (void)zoomIn;

@end

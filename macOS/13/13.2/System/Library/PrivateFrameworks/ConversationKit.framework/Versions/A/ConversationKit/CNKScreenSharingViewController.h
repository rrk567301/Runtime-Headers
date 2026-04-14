@interface CNKScreenSharingViewController : ConversationKit.PlatformViewController <CNKScreenSharingViewControllerProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ shouldDisableZoom;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sharedContentViewController;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (long long)viewType;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (void)resetZoom;
- (void)zoomIn;
- (void)zoomOut;
- (BOOL)canResetZoom;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;

@end

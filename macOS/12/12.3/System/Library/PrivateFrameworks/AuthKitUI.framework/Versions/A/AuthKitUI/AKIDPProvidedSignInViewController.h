@class NSString, NSView, WKWebView, AKIDPHandler, NSButton;

@interface AKIDPProvidedSignInViewController : NSViewController <AKIDPPresentationController, AKInAssistantNavigationHandler>

@property (retain, nonatomic) AKIDPHandler *idpHandler;
@property (weak) NSView *containerView;
@property (weak) NSButton *cancelButton;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (void)cleanUp;
- (id)initWithIDPHandler:(id)a0;
- (void)leftNavigationButtonClicked:(id)a0;
- (void)rightNavigationButtonClicked:(id)a0;
- (void)alternateNavigationButtonClicked:(id)a0;
- (void)cancelButtonTapped:(id)a0;

@end

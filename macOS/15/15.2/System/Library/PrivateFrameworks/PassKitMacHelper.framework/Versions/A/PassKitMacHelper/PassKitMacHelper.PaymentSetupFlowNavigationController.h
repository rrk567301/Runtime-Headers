@interface PassKitMacHelper.PaymentSetupFlowNavigationController : NSViewController <PKUIFlowManagerRenderer, PKMacSetupAssistantViewTemplateProviding> {
    void /* unknown type, empty encoding */ templateManager;
    void /* unknown type, empty encoding */ presentationMode;
    void /* unknown type, empty encoding */ activeViewController;
    void /* unknown type, empty encoding */ viewControllers;
    void /* unknown type, empty encoding */ configuredWindow;
    void /* unknown type, empty encoding */ onWindowAvailable;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ flowDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)presentViewControllerAsModalWindow:(id)a0;
- (void)presentViewControllerAsSheet:(id)a0;
- (id)templateView;
- (void)viewWillDisappear;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)rootViewController;
- (id)createChildRenderer;
- (void)dismissWithViewController:(id)a0 animated:(BOOL)a1;
- (id)navViewControllers;
- (void)presentWithViewController:(id)a0 animated:(BOOL)a1;
- (void)pushWithViewController:(id)a0 animated:(BOOL)a1;

@end

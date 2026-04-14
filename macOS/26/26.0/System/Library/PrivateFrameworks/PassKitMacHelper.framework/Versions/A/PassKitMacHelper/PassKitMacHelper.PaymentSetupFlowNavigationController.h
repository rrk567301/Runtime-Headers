@interface PassKitMacHelper.PaymentSetupFlowNavigationController : NSViewController <PKMacSetupAssistantViewTemplateProviding> {
    void /* unknown type, empty encoding */ templateManager;
    void /* unknown type, empty encoding */ presentationMode;
    void /* unknown type, empty encoding */ activeViewController;
    void /* unknown type, empty encoding */ viewControllers;
    void /* unknown type, empty encoding */ configuredWindow;
    void /* unknown type, empty encoding */ onWindowAvailable;
    void /* unknown type, empty encoding */ flowDelegate;
}

- (void)viewWillDisappear;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)presentViewControllerAsModalWindow:(id)a0;
- (void)presentViewControllerAsSheet:(id)a0;
- (id)templateView;

@end

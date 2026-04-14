@interface AppSubscriptions.MessageSheetViewController : NSViewController {
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ didDismiss;
    void /* unknown type, empty encoding */ onRequestDismiss;
    void /* unknown type, empty encoding */ onActionResult;
    void /* unknown type, empty encoding */ messageLocation;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ messageViewBuilder;
    void /* unknown type, empty encoding */ messageViewControllerFactory;
    void /* unknown type, empty encoding */ networkChecker;
    void /* unknown type, empty encoding */ errorMessageViewController;
    void /* unknown type, empty encoding */ hasReportedAppearance;
    void /* unknown type, empty encoding */ placementContentIdentifier;
    void /* unknown type, empty encoding */ placementPresentationReporter;
}

- (void)viewDidAppear;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end

@interface GameCenterUI.SheetPresentationViewController : NSViewController {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ presentingWindow;
    void /* unknown type, empty encoding */ dismissEventsMonitor;
    void /* unknown type, empty encoding */ windowObservation;
}

- (void)windowDidResize:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)terminate:(id)a0;
- (void)viewWillAppear;
- (void)viewWillLayout;

@end

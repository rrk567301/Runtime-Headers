@interface GameCenterUI.SheetPresentationViewController : NSViewController {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ presentingWindow;
    void /* unknown type, empty encoding */ dismissEventsMonitor;
    void /* unknown type, empty encoding */ windowObservation;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)terminate:(id)a0;
- (void)windowDidResize:(id)a0;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;

@end

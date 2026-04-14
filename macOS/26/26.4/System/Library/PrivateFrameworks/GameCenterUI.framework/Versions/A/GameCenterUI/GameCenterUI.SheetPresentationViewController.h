@interface GameCenterUI.SheetPresentationViewController : NSViewController {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ presentingWindow;
    void /* unknown type, empty encoding */ dismissEventsMonitor;
    void /* unknown type, empty encoding */ windowObservation;
}

- (void)windowDidResize:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)terminate:(id)a0;
- (void)viewWillAppear;
- (void)viewWillLayout;

@end

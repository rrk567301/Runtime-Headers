@class NSWindow, NSViewController;

@interface DDDataDetectorsViewHost : NSViewController {
    BOOL _lookup;
    BOOL _observersSet;
}

@property (retain) NSWindow *hostingWindow;
@property (retain) id globalEventMonitor;
@property BOOL closeRequested;
@property (retain) NSViewController *contentController;
@property (copy, nonatomic) id /* block */ behaviorChangeBlock;
@property BOOL isValid;
@property (weak) id bridge;

- (void)invalidate;
- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setView:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setControls:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)advanceToRunPhase;
- (void)setObserving:(BOOL)a0;
- (void)_viewWillAppear;
- (void)setEditionMode:(BOOL)a0;
- (void)_viewDidAppear;
- (void)_viewDidDisappear;
- (void)_viewDidLoad;
- (void)_viewWillDisappear;
- (void)closeBubble:(id)a0;
- (id)flightController;
- (id)parsecController;
- (void)requestClose;
- (void)setAltBehavior:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)setContainsEditedContent:(BOOL)a0;
- (void)updateViewController;

@end

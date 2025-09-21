@class NSWindow, NSViewController;

@interface DDDataDetectorsViewHost : NSViewController {
    char _lookup;
    char _observersSet;
}

@property (retain) NSWindow *hostingWindow;
@property (retain) id globalEventMonitor;
@property char closeRequested;
@property (retain) NSViewController *contentController;
@property (copy, nonatomic) id /* block */ behaviorChangeBlock;
@property char isValid;
@property (weak) id bridge;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setView:(id)a0;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)advanceToRunPhase;
- (void)setObserving:(char)a0;
- (void)setControls:(id)a0;
- (void)_viewWillAppear;
- (void)setEditionMode:(char)a0;
- (void)_viewDidAppear;
- (void)_viewDidDisappear;
- (void)_viewDidLoad;
- (void)_viewWillDisappear;
- (void)closeBubble:(id)a0;
- (id)flightController;
- (id)parsecController;
- (void)requestClose;
- (void)setAltBehavior:(char)a0 withCompletion:(id /* block */)a1;
- (void)setContainsEditedContent:(char)a0;
- (void)updateViewController;

@end

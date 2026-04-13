@class NSView, NSTextField;
@protocol VUIHintsWindowControllerDelegate;

@interface VUIHintsWindowController : NSWindowController

@property (retain, nonatomic) NSTextField *parentTextField;
@property (retain, nonatomic) NSView *hintsView;
@property (nonatomic) id lostFocusObserver;
@property (nonatomic) id localMouseDownEventMonitor;
@property (weak, nonatomic) id<VUIHintsWindowControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)dismissHintsWindow;
- (void)_layoutHintsWindow:(double)a0;
- (void)showHintWindowForTextField:(id)a0 hintsView:(id)a1;

@end

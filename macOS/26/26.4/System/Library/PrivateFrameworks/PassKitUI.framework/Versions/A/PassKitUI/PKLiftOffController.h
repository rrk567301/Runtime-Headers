@class PKPassViewerViewController, NSWindow, NSView, PKPass;

@interface PKLiftOffController : NSObject {
    PKPass *_pass;
    PKPassViewerViewController *_viewController;
    NSWindow *_flyingWindow;
    NSView *_flyingPassView;
    NSWindow *_shadowWindow;
}

+ (id)_controllers;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPass:(id)a0 inViewController:(id)a1;
- (void)liftOffWithCompletionBlock:(id /* block */)a0 closeHostWindow:(BOOL)a1;

@end

@class NSServiceViewController;

@interface NSServiceViewControllerWindow : NSWindow {
    NSServiceViewController *_viewController;
    unsigned int _adjustWindowContextInProgress;
}

+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_refreshWindowResizeConstraintsWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_isFunctionRowWindow;
- (BOOL)allowsFontSmoothing;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withViewController:(id)a1;

@end

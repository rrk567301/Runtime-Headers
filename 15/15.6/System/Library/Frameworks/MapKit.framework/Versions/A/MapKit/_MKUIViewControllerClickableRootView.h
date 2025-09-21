@class NSInvocation;

@interface _MKUIViewControllerClickableRootView : _MKUIViewControllerRootView {
    char _trackingClick;
    NSInvocation *_actionInvocation;
}

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (char)_shouldTrackEvent:(id)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;

@end

@class NSTimer;

@interface SafariOpenPanel : NSOpenPanel {
    NSTimer *_keyDownTimer;
    BOOL _acceptsKeyEvents;
}

- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;

@end

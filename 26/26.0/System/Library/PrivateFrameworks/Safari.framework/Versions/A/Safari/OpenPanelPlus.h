@class NSTimer;

@interface OpenPanelPlus : NSOpenPanel {
    NSTimer *_keyDownTimer;
    BOOL _acceptsKeyEvents;
    NSTimer *_enableOKButtonTimer;
    id _leftMouseButtonEventMonitor;
}

- (void)becomeKeyWindow;
- (void)dealloc;
- (void)keyDown:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)keyUp:(id)a0;
- (void)_removeLeftMouseButtonEventMonitor;
- (void)_restartEnableOKButtonTimer;

@end

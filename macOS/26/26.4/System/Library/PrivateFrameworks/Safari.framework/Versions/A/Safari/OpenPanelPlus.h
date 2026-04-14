@class NSTimer;

@interface OpenPanelPlus : NSOpenPanel {
    NSTimer *_keyDownTimer;
    BOOL _acceptsKeyEvents;
    NSTimer *_enableOKButtonTimer;
    id _leftMouseButtonEventMonitor;
}

- (void)becomeKeyWindow;
- (void)keyDown:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)keyUp:(id)a0;
- (void)_removeLeftMouseButtonEventMonitor;
- (void)_restartEnableOKButtonTimer;

@end

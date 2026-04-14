@interface GCKeyboardControllerCatalystWindowManager : NSObject <GCKeyboardControllerWindowManager> {
    void /* unknown type, empty encoding */ _awaitingCaptureInWindow;
    void /* unknown type, empty encoding */ _pointerHidden;
    void /* unknown type, empty encoding */ _savedCursorPosition;
    void /* unknown type, empty encoding */ keyCatalystWindow;
}

@property (nonatomic) BOOL enablePointerCapture;

- (BOOL)mouseDown:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)keyDown:(BOOL)a0;
- (BOOL)mouseMoved;
- (void)releasePointer;
- (void)windowWithDidBecomeKey:(id)a0;
- (void)windowWithDidEnterFullScreen:(id)a0;
- (void)windowWithDidExitFullScreen:(id)a0;
- (void)windowWithDidResignKey:(id)a0;

@end

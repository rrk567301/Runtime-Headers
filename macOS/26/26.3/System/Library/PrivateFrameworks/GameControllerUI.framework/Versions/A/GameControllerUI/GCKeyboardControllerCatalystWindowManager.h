@interface GCKeyboardControllerCatalystWindowManager : NSObject <GCKeyboardControllerWindowManager> {
    void /* unknown type, empty encoding */ _awaitingCaptureInWindow;
    void /* unknown type, empty encoding */ _pointerHidden;
    void /* unknown type, empty encoding */ _savedCursorPosition;
    void /* unknown type, empty encoding */ keyCatalystWindow;
}

@property (nonatomic) BOOL enablePointerCapture;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)mouseDown:(BOOL)a0;
- (BOOL)keyDown:(BOOL)a0;
- (BOOL)mouseMoved;
- (void)releasePointer;
- (void)windowWithDidBecomeKey:(id)a0;
- (void)windowWithDidEnterFullScreen:(id)a0;
- (void)windowWithDidExitFullScreen:(id)a0;
- (void)windowWithDidResignKey:(id)a0;

@end

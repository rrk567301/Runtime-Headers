@interface GCKeyboardControllerCatalystWindowManager : NSObject <GCKeyboardControllerWindowManager> {
    void /* unknown type, empty encoding */ _awaitingCaptureInWindow;
    void /* unknown type, empty encoding */ _pointerHidden;
    void /* unknown type, empty encoding */ _savedCursorPosition;
    void /* unknown type, empty encoding */ keyCatalystWindow;
}

@property (nonatomic) BOOL enablePointerCapture;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)mouseDown:(BOOL)a0;
- (BOOL)keyDown:(BOOL)a0;
- (id)init;
- (BOOL)mouseMoved;
- (void)releasePointer;
- (void)windowWithDidBecomeKey:(id)a0;
- (void)windowWithDidEnterFullScreen:(id)a0;
- (void)windowWithDidExitFullScreen:(id)a0;
- (void)windowWithDidResignKey:(id)a0;

@end

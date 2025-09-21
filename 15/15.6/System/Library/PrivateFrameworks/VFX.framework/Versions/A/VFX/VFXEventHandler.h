@class VFXView, VFXNode, NSMutableArray;

@interface VFXEventHandler : NSObject {
    VFXView *_view;
    struct __IOHIDManager { } *_hidManager;
    NSMutableArray *_controllers;
    char _enableFreeCamera;
    char _autoSwitchToFreeCamera;
}

@property (readonly) VFXView *view;
@property char enableFreeCamera;
@property char autoSwitchToFreeCamera;
@property (readonly) VFXNode *freeCamera;

- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)setView:(id)a0;
- (void)becomeFirstResponder;
- (char)magnifyWithEvent:(id)a0;
- (char)mouseDown:(id)a0;
- (char)mouseDragged:(id)a0;
- (char)mouseUp:(id)a0;
- (void)resignFirstResponder;
- (char)rotateWithEvent:(id)a0;
- (char)scrollWheel:(id)a0;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (char)wantsRedraw;
- (void)activateFreeCamera;
- (void)viewDidDrawAtTime:(double)a0;
- (void)viewWillDrawAtTime:(double)a0;
- (void)worldWillChange;
- (void)worldDidChange;

@end

@class VFXView, VFXNode, NSMutableArray;

@interface VFXEventHandler : NSObject {
    VFXView *_view;
    struct __IOHIDManager { } *_hidManager;
    NSMutableArray *_controllers;
    BOOL _enableFreeCamera;
    BOOL _autoSwitchToFreeCamera;
}

@property (readonly) VFXView *view;
@property BOOL enableFreeCamera;
@property BOOL autoSwitchToFreeCamera;
@property (readonly) VFXNode *freeCamera;

- (BOOL)mouseUp:(id)a0;
- (void)setView:(id)a0;
- (void)becomeFirstResponder;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)resignFirstResponder;
- (BOOL)mouseDragged:(id)a0;
- (BOOL)mouseDown:(id)a0;
- (id)init;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)rotateWithEvent:(id)a0;
- (BOOL)scrollWheel:(id)a0;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (BOOL)wantsRedraw;
- (void)activateFreeCamera;
- (void)viewDidDrawAtTime:(double)a0;
- (void)viewWillDrawAtTime:(double)a0;
- (void)worldWillChange;
- (void)worldDidChange;

@end

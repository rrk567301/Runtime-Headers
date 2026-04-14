@class SCNView, SCNNode, NSMutableArray;

@interface SCNEventHandler : NSObject {
    SCNView *_view;
    struct __IOHIDManager { } *_hidManager;
    NSMutableArray *_controllers;
    BOOL _enableFreeCamera;
    BOOL _autoSwitchToFreeCamera;
}

@property (readonly) SCNView *view;
@property BOOL enableFreeCamera;
@property BOOL autoSwitchToFreeCamera;
@property (readonly) SCNNode *freeCamera;

- (void)dealloc;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)setView:(id)a0;
- (BOOL)mouseDown:(id)a0;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (BOOL)scrollWheel:(id)a0;
- (BOOL)mouseDragged:(id)a0;
- (BOOL)mouseUp:(id)a0;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)rotateWithEvent:(id)a0;
- (BOOL)wantsRedraw;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)viewWillDrawAtTime:(double)a0;
- (void)viewDidDrawAtTime:(double)a0;
- (void)activateFreeCamera;

@end

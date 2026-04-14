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

- (BOOL)mouseUp:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setView:(id)a0;
- (void)resignFirstResponder;
- (id)init;
- (void)becomeFirstResponder;
- (BOOL)mouseDragged:(id)a0;
- (void)dealloc;
- (BOOL)mouseDown:(id)a0;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)rotateWithEvent:(id)a0;
- (BOOL)scrollWheel:(id)a0;
- (void)cameraDidChange;
- (void)sceneWillChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (BOOL)wantsRedraw;
- (void)activateFreeCamera;
- (void)viewDidDrawAtTime:(double)a0;
- (void)viewWillDrawAtTime:(double)a0;

@end

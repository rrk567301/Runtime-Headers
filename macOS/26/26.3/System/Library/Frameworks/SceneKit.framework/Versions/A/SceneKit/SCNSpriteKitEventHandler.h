@class SKScene, NSMutableDictionary;

@interface SCNSpriteKitEventHandler : NSObject {
    NSMutableDictionary *_touchMap;
    BOOL _mouseIsDown;
    BOOL _rightMouseIsDown;
}

@property (retain, nonatomic) SKScene *scene;

- (BOOL)mouseUp:(id)a0;
- (id)init;
- (BOOL)mouseDragged:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (BOOL)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)rightMouseDown:(id)a0;
- (void)keyUp:(id)a0;
- (BOOL)mouseMoved:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (BOOL)rightMouseDragged:(id)a0;
- (BOOL)rightMouseUp:(id)a0;

@end

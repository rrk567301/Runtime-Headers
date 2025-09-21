@class SKScene, NSMutableDictionary;

@interface SCNSpriteKitEventHandler : NSObject {
    NSMutableDictionary *_touchMap;
    char _mouseIsDown;
    char _rightMouseIsDown;
}

@property (retain, nonatomic) SKScene *scene;

- (void)dealloc;
- (id)init;
- (char)rightMouseDown:(id)a0;
- (char)acceptsFirstResponder;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (char)mouseDown:(id)a0;
- (char)mouseDragged:(id)a0;
- (char)mouseMoved:(id)a0;
- (char)mouseUp:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (char)rightMouseDragged:(id)a0;
- (char)rightMouseUp:(id)a0;

@end

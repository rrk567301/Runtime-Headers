@class CAStateControllerUndo, NSTimer, CALayer, NSMutableArray, CAState;

@interface CAStateControllerLayer : NSObject {
    NSMutableArray *_transitions;
    NSTimer *_nextTimer;
    CAState *_nextState;
    float _nextSpeed;
}

@property (readonly) CALayer *layer;
@property (retain, nonatomic) CAState *currentState;
@property (readonly) CAStateControllerUndo *undoStack;

- (id)initWithLayer:(id)a0;
- (void)invalidate;
- (void)addTransition:(id)a0;
- (void)dealloc;
- (void)removeTransition:(id)a0;

@end

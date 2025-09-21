@class NSTimer, NSMutableArray, NSControlGestureRecognizer;

@interface NSControlAuxiliary : NSObject {
    id _target;
    struct { unsigned char guardEnabled : 1; unsigned char guardLocked : 1; unsigned char insetMitigation : 2; unsigned char restingMitigation : 2; unsigned char usesGestureRecognizer : 1; unsigned int reserved : 25; } _flags;
}

@property long long tag;
@property SEL action;
@property (weak) id target;
@property BOOL guardEnabled;
@property BOOL guardLocked;
@property BOOL usesGestureRecognizer;
@property (retain) NSControlGestureRecognizer *gestureRecognizer;
@property long long touchBarInsetMitigation;
@property long long touchBarRestingMitigation;
@property (retain) NSTimer *touchingTooLongTimer;
@property (retain) NSMutableArray *targetActions;

- (void)dealloc;
- (void)removeTouchingTooLongTimer;

@end

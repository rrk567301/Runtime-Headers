@class NSArray, NSMutableArray;

@interface NSPressGestureRecognizer : NSGestureRecognizer <NSCoding> {
    struct CGPoint { double x; double y; } _location;
    unsigned long long _buttonMask;
    double _minimumPressDuration;
    double _allowableMovement;
    long long _buttonCount;
    struct { unsigned char enoughTimeElapsed : 1; unsigned char gotButtonUp : 1; unsigned char hasCustomMinPressDuration : 1; unsigned char hasCustomAllowableMovement : 1; unsigned char cancelPastAllowableMovement : 1; unsigned int reserved : 27; } _lcflags;
    long long _activeTouchCount;
    NSMutableArray *_trackingTouchIdentities;
    NSArray *_currentTouches;
}

@property char cancelPastAllowableMovement;
@property (readonly, retain) NSArray *touches;
@property unsigned long long buttonMask;
@property double minimumPressDuration;
@property double allowableMovement;
@property long long numberOfTouchesRequired;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)_setHasCustomAllowableMovement:(char)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (unsigned long long)_acceptedEventMask;
- (void)_appendSubclassDescription:(id)a0;
- (char)_hasCustomAllowableMovement;
- (char)_hasCustomMinimumPressDuration;
- (void)_setHasCustomMinimumPressDuration:(char)a0;
- (char)canPreventGestureRecognizer:(id)a0;
- (void)clearTimer;
- (void)enoughTimeElapsed:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)startTimer;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end

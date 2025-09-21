@class NSString;

@interface SwiftUI.AppKitGestureRecognizer : NSGestureRecognizer {
    void /* unknown type, empty encoding */ eventBridge;
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ consumptionDelegate;
    void /* unknown type, empty encoding */ gestureCategory;
    void /* unknown type, empty encoding */ _name;
    void /* unknown type, empty encoding */ magnifySeed;
    void /* unknown type, empty encoding */ accumulatedMagnification;
    void /* unknown type, empty encoding */ rotateSeed;
    void /* unknown type, empty encoding */ accumulatedRotation;
    void /* unknown type, empty encoding */ potentialWindowDragEvent;
    void /* unknown type, empty encoding */ isDraggingWindow;
    void /* unknown type, empty encoding */ potentialAutoScrollEvent;
    void /* unknown type, empty encoding */ currentAutoScrollTargetView;
    void /* unknown type, empty encoding */ currentAutoScrollTask;
}

@property (nonatomic, readonly) long long buttonMask;
@property (nonatomic, readonly) long long numberOfClicksRequired;
@property (nonatomic, readonly) long long numberOfTouchesRequired;
@property (nonatomic, copy) NSString *name;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_canCancelGestureRecognizer:(id)a0;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)mouseCancelled:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)otherMouseDown:(id)a0;
- (BOOL)_canBeCancelledByGestureRecognizer:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rotateWithEvent:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)autoScrollIfNeeded;
- (void)beginDraggingWindowIfNeeded;

@end

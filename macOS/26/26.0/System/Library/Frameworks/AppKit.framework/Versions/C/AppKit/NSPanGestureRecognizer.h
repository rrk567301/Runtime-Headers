@class NSArray, NSMutableArray, _NS2DVelocityFilter;

@interface NSPanGestureRecognizer : NSGestureRecognizer <NSCoding> {
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _translation;
    unsigned long long _buttonMask;
    long long _buttonCount;
    _NS2DVelocityFilter *_velocityFilter;
    double _timestamp;
    unsigned long long _modifierFlags;
    struct CGPoint { double x; double y; } _locationInWindow;
    long long _activeTouchCount;
    NSMutableArray *_trackingTouchIdentities;
    NSArray *_currentTouches;
    BOOL _translatesContextOrigin;
}

@property unsigned long long buttonMask;
@property long long numberOfTouchesRequired;

- (unsigned long long)_modifierFlags;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (double)timestamp;
- (void)_commonInit;
- (id)touches;
- (void)encodeWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_appendSubclassDescription:(id)a0;
- (double)_timestamp;
- (void)rightMouseDown:(id)a0;
- (void)otherMouseDown:(id)a0;
- (unsigned long long)_acceptedEventMask;
- (struct CGPoint { double x0; double x1; })_locationInWindow;
- (void)_noteStateChanged;
- (void)_setTranslatesContextOrigin:(BOOL)a0;
- (BOOL)_translatesContextOrigin;
- (void)_updateForMouseDownWithEvent:(id)a0;
- (void)_updatePropertiesWithLocation:(struct CGPoint { double x0; double x1; })a0 event:(id)a1;
- (void)flagsChanged:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end

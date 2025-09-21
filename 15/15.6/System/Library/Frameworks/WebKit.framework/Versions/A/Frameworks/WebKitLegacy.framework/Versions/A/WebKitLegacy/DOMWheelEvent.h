@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) int wheelDeltaX;
@property (readonly) int wheelDeltaY;
@property (readonly) int wheelDelta;
@property (readonly) char isHorizontal;

- (double)deltaX;
- (double)deltaY;
- (double)deltaZ;
- (unsigned long long)_phase;
- (unsigned long long)_momentumPhase;
- (unsigned int)deltaMode;
- (void)initWheelEvent:(int)a0 wheelDeltaY:(int)a1 view:(id)a2 screenX:(int)a3 screenY:(int)a4 clientX:(int)a5 clientY:(int)a6 ctrlKey:(char)a7 altKey:(char)a8 shiftKey:(char)a9 metaKey:(char)a10;
- (char)webkitDirectionInvertedFromDevice;

@end

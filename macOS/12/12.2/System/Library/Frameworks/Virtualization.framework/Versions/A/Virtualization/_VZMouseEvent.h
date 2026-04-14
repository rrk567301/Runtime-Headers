@interface _VZMouseEvent : NSObject

@property (readonly) long long pressedButtons;
@property (readonly) double deltaX;
@property (readonly) double deltaY;

- (id)initWithEvent:(id)a0;
- (id)initWithPressedButtons:(long long)a0 deltaX:(double)a1 deltaY:(double)a2;

@end

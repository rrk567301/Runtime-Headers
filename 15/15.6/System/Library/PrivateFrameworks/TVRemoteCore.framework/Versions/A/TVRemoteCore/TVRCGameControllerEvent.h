@interface TVRCGameControllerEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic, getter=isDown) char down;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } joystickLocation;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithTimestamp:(double)a0 isDown:(char)a1 joystickLocation:(struct CGPoint { double x0; double x1; })a2;

@end

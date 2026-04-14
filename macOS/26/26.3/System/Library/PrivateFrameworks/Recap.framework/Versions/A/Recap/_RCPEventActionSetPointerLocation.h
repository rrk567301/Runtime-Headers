@interface _RCPEventActionSetPointerLocation : RCPEventAction

@property (nonatomic) struct CGPoint { double x; double y; } modelPoint;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)play;

@end

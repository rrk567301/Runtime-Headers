@interface AXEHIDEvent : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long buttonNumber;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) double deltaX;
@property (nonatomic) double deltaY;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end

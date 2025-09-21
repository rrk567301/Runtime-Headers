@interface RCPDiscreteGestureSpec : NSObject

@property (nonatomic) char isRotation;
@property (nonatomic) char isScale;
@property (nonatomic) char isTranslation;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

+ (id)translation:(struct CGPoint { double x0; double x1; })a0;
+ (id)scaleZ:(double)a0;
+ (id)rotationZ:(double)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end

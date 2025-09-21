@interface SCNJSValueTmpImp : NSObject

+ (id)valueWithTransform3D:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 inContext:(id)a1;
+ (id)valueWithVector3:(struct SCNVector3 { double x0; double x1; double x2; })a0 inContext:(id)a1;
+ (id)valueWithVector4:(struct SCNVector4 { double x0; double x1; double x2; double x3; })a0 inContext:(id)a1;

- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })toTransform3D;
- (struct SCNVector3 { double x0; double x1; double x2; })toVector3;
- (struct SCNVector4 { double x0; double x1; double x2; double x3; })toVector4;

@end

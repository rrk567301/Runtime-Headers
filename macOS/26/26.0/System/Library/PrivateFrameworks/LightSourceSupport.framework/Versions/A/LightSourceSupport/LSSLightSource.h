@interface LSSLightSource : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) struct _LSSVec3 { double x; double y; double z; } direction;
@property (readonly, nonatomic) struct _LSSQuaternion { double x; double y; double z; double w; } orientation;

- (id)initWithSample:(struct { double x0; double x1; struct { } x2; BOOL x3; })a0;
- (id)initWithIntensity:(double)a0 angle:(double)a1 direction:(struct _LSSVec3 { double x0; double x1; double x2; })a2 orientation:(struct _LSSQuaternion { double x0; double x1; double x2; double x3; })a3 timestamp:(double)a4;

@end

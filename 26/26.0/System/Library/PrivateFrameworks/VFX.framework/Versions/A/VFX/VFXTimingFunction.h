@class CAMediaTimingFunction;

@interface VFXTimingFunction : NSObject <NSSecureCoding> {
    struct __CFXTimingFunction { } *_timingFunction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) CAMediaTimingFunction *caMediaTimingFunction;
@property (readonly, nonatomic) BOOL isSpring;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ springCoefiscients;
@property (nonatomic) double perceptualDuration;
@property (nonatomic) float bounce;
@property (readonly, nonatomic) double springDuration;

+ (id)functionWithCAMediaTimingFunction:(id)a0;
+ (id)functionWithMass:(float)a0 stiffness:(float)a1 damping:(float)a2 initialVelocity:(float)a3;

- (float)stiffness;
- (void)setDamping:(float)a0;
- (void)setStiffness:(float)a0;
- (void)setInitialVelocity:(float)a0;
- (float)initialVelocity;
- (float)damping;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (float)mass;
- (void)setMass:(float)a0;
- (float)evalAtTime:(double)a0;
- (id)initWithTimingFunctionRef:(struct __CFXTimingFunction { } *)a0;
- (struct __CFXTimingFunction { } *)cfxTimingFunction;
- (void)setSpringCoefiscients:(SEL)a0;

@end

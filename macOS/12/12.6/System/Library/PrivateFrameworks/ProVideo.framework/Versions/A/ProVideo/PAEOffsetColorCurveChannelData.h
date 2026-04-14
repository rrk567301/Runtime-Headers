@interface PAEOffsetColorCurveChannelData : NSObject <NSSecureCoding, NSCopying, FxCustomParameterInterpolation_v2> {
    void *_curve_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;
+ (id)channelDataWithRed:(double)a0 green:(double)a1 blue:(double)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (double)red;
- (double)green;
- (double)blue;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2;
- (double)evaluate:(double)a0;
- (void *)curveRef;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (BOOL)isAtDefaults;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 curve:(const void *)a3;
- (BOOL)conformFromColorCurve:(id)a0;

@end

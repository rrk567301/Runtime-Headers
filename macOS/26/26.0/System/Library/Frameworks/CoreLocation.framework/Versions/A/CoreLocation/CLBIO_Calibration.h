@interface CLBIO_Calibration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float rotationToTrueNorth_rad;
@property (readonly, nonatomic) float scaleFactor;

- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRotationToTrueNorth:(float)a0 scaleFactor:(float)a1;

@end

@interface CLBIO_Calibration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float rotationToTrueNorth_rad;
@property (readonly, nonatomic) float scaleFactor;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (id)initWithRotationToTrueNorth:(float)a0 scaleFactor:(float)a1;

@end

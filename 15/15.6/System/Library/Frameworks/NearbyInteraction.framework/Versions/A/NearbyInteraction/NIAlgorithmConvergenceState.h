@interface NIAlgorithmConvergenceState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long convergence;
@property (nonatomic) char insufficientSignalStrength;
@property (nonatomic) char insufficientHorizontalSweep;
@property (nonatomic) char insufficientVerticalSweep;
@property (nonatomic) char insufficientMovement;
@property (nonatomic) char insufficientLighting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlgorithmConvergenceState:(id)a0;
- (id)initWithConvergenceStatus:(long long)a0;

@end

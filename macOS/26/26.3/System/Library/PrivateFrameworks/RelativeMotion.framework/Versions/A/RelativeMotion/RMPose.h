@class RMAttitude;

@interface RMPose : RMLogItem

@property (readonly, nonatomic) RMAttitude *attitude;
@property (readonly, nonatomic) double consumedAuxTimestamp;
@property (readonly, nonatomic) double receivedAuxTimestamp;
@property (readonly, nonatomic) double machAbsTimestamp;
@property (readonly, nonatomic) double presentationTimestamp;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithAttitude:(id)a0 consumedAuxTimestamp:(double)a1 receivedAuxTimestamp:(double)a2 machAbsTimestamp:(double)a3 presentationTimestamp:(double)a4;

@end

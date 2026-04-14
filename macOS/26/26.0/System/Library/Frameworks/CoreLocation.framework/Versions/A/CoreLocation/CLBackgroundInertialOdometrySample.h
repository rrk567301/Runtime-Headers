@class CLBIO_DeltaPosition, CLBIO_DeltaVelocity, NSDate, CLBIO_Quaternion, CLBIO_Calibration;

@interface CLBackgroundInertialOdometrySample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *cfAbsTimestamp;
@property (readonly, nonatomic) double machContinuousTimestamp_s;
@property (readonly, nonatomic) double sampleInterval_s;
@property (readonly, nonatomic) CLBIO_DeltaPosition *deltaPosition_m;
@property (readonly, nonatomic) CLBIO_DeltaVelocity *deltaVelocity_mps;
@property (readonly, nonatomic) CLBIO_Quaternion *quaternion;
@property (readonly, nonatomic) unsigned long long referenceFrameContinuity;
@property (readonly, nonatomic) unsigned long long sessionReferenceFrame;
@property (readonly, nonatomic) unsigned long long staticFlag;
@property (readonly, nonatomic) unsigned long long mountState;
@property (readonly, nonatomic) unsigned long long zupt;
@property (readonly, nonatomic) unsigned long long dotBiasChange;
@property (readonly, nonatomic) CLBIO_Calibration *calibration;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimestamp:(id)a0 machContinuousTimestamp:(double)a1 sampleInterval:(double)a2 deltaPosition:(id)a3 deltaVelocity:(id)a4 quaternion:(id)a5;
- (id)initWithTimestamp:(id)a0 machContinuousTimestamp:(double)a1 sampleInterval:(double)a2 deltaPosition:(id)a3 deltaVelocity:(id)a4 quaternion:(id)a5 referenceFrameContinuity:(unsigned long long)a6 referenceFrame:(unsigned long long)a7 staticFlag:(unsigned long long)a8;
- (id)initWithTimestamp:(id)a0 machContinuousTimestamp:(double)a1 sampleInterval:(double)a2 deltaPosition:(id)a3 deltaVelocity:(id)a4 quaternion:(id)a5 referenceFrameContinuity:(unsigned long long)a6 referenceFrame:(unsigned long long)a7 staticFlag:(unsigned long long)a8 mountState:(unsigned long long)a9 zupt:(unsigned long long)a10 dotBiasChange:(unsigned long long)a11 calibration:(id)a12;

@end

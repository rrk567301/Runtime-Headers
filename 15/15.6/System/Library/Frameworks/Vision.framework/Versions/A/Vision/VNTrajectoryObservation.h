@class NSArray, NSUUID;

@interface VNTrajectoryObservation : VNObservation {
    NSUUID *_requestUUID;
}

@property (readonly, copy, nonatomic) NSArray *detectedPoints;
@property (readonly, copy, nonatomic) NSArray *projectedPoints;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ equationCoefficients;
@property (readonly, nonatomic) double movingAverageRadius;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)detectedPointsInTopLeftOrigin:(char)a0 orientation:(unsigned int)a1;
- (id)projectedPointsInTopLeftOrigin:(char)a0 orientation:(unsigned int)a1;
- (id)vn_cloneObject;

@end

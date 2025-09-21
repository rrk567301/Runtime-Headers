@class SCNNode;

@interface SCNReplicatorConstraint : SCNConstraint {
    SCNNode *_target;
    char _replicateOrientation;
    char _replicatePosition;
    char _replicateScale;
    struct SCNVector4 { double x; double y; double z; double w; } _orientationOffset;
    struct SCNVector3 { double x; double y; double z; } _positionOffset;
    struct SCNVector3 { double x; double y; double z; } _scaleOffset;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) char replicatesOrientation;
@property (nonatomic) char replicatesPosition;
@property (nonatomic) char replicatesScale;
@property (nonatomic) struct SCNVector4 { double x0; double x1; double x2; double x3; } orientationOffset;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } positionOffset;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } scaleOffset;

+ (char)supportsSecureCoding;
+ (id)replicatorConstraintWithTarget:(id)a0;
+ (id)replicatorConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_customDecodingOfSCNReplicatorConstraint:(id)a0;
- (void)_customEncodingOfSCNReplicatorConstraint:(id)a0;

@end

@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint {
    SCNNode *_target;
    BOOL _gimbalLockEnabled;
    struct SCNVector3 { double x; double y; double z; } _targetOffset;
    struct SCNVector3 { double x; double y; double z; } _upVector;
    struct SCNVector3 { double x; double y; double z; } _localFront;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } targetOffset;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } localFront;
@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } worldUp;
@property (nonatomic) BOOL gimbalLockEnabled;

+ (BOOL)supportsSecureCoding;
+ (id)lookAtConstraintWithTarget:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTarget:(id)a0;
- (struct SCNVector3 { double x0; double x1; double x2; })upVector;
- (void)setUpVector:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (void)_customEncodingOfSCNLookAtConstraint:(id)a0;
- (void)_customDecodingOfSCNLookAtConstraint:(id)a0;

@end

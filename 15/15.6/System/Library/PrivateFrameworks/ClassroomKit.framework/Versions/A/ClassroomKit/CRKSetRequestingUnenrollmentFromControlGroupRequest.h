@class DMFControlGroupIdentifier;

@interface CRKSetRequestingUnenrollmentFromControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic) char requestingUnenroll;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class DMFControlGroupIdentifier;

@interface CRKSetRequestingUnenrollmentFromControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic) BOOL requestingUnenroll;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

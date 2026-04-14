@class DMFControlGroupIdentifier;

@interface CRKFetchCoursePermissionsRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

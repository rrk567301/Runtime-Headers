@class NSDictionary;

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *permissionsByFeature;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

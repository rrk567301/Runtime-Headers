@class NSDictionary;

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *permissionsByFeature;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

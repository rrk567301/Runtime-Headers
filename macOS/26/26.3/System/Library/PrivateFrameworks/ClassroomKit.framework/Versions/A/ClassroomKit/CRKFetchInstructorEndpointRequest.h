@class NSURL, NSString;

@interface CRKFetchInstructorEndpointRequest : CATTaskRequest

@property (retain, nonatomic) NSURL *classroomAppBundleURL;
@property (copy, nonatomic) NSString *instructordBundleIdentifier;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class NSURL;

@interface CRKFetchResourceRequest : CATTaskRequest

@property (copy, nonatomic) NSURL *resourceURL;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

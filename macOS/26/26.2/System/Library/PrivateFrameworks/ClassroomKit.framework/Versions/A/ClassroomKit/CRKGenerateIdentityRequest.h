@class NSString;

@interface CRKGenerateIdentityRequest : CATTaskRequest

@property (copy, nonatomic) NSString *commonName;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface CRKGenerateIdentityRequest : CATTaskRequest

@property (copy, nonatomic) NSString *commonName;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

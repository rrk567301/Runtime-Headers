@class NSString;

@interface CRKFetchChaptersRequest : CATTaskRequest

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *identifierType;
@property (copy, nonatomic) NSString *identifier;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isValidWithError:(id *)a0;

@end

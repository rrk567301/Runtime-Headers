@class NSDictionary;

@interface CRKDumpASMCredentialsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *credentials;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

@class NSData;

@interface CRKFetchStagedAdHocIdentityCertificateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *stagedAdHocIdentityCertificate;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

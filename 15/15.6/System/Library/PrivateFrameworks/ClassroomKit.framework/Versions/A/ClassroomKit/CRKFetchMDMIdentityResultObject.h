@class NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject

@property (retain, nonatomic) NSString *mdmIdentityCommonName;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

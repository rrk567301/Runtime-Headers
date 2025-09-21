@class NSDictionary;

@interface CRKFetchLastLoginDateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *lastLoginDatesByAppleID;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDatesByAppleID:(id)a0;

@end

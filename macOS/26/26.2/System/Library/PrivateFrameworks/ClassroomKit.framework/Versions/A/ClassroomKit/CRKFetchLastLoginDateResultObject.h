@class NSDictionary;

@interface CRKFetchLastLoginDateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *lastLoginDatesByAppleID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatesByAppleID:(id)a0;

@end

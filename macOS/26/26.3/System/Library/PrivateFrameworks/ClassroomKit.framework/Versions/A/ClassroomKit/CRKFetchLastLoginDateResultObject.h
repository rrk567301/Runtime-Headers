@class NSDictionary;

@interface CRKFetchLastLoginDateResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *lastLoginDatesByAppleID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDatesByAppleID:(id)a0;

@end

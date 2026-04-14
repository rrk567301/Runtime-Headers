@class NSDictionary;

@interface DMFFetchLastLoginDateResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *lastLoginDatesByAppleID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatesByAppleID:(id)a0;

@end

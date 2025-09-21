@class NSDate;

@interface APPolicyChangePasswordOnDate : APPolicy <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDate *changeOnDate;

+ (id)policy;
+ (id)policyWithDate:(id)a0;
+ (id)policyWithIdentifier:(id)a0 andDate:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)_parametersForDate:(id)a0;
- (id)initWithIdentifier:(id)a0 andDate:(id)a1;

@end

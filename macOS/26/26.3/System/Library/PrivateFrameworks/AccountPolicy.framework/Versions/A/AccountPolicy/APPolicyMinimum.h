@class NSNumber;

@interface APPolicyMinimum : APPolicy <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *minimum;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 andMinimum:(id)a1;

@end

@interface AMSInteger : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long value;

+ (id)integerWithInteger:(long long)a0;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInteger:(long long)a0;
- (char)isEqualToInteger:(id)a0;

@end

@interface AMSDouble : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) double value;

+ (id)doubleWithDouble:(double)a0;

- (char)isEqual:(id)a0;
- (id)initWithDouble:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToDouble:(id)a0;

@end

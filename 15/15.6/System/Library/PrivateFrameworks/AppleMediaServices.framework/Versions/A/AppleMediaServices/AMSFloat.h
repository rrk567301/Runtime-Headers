@interface AMSFloat : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) float value;

+ (id)floatWithFloat:(float)a0;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFloat:(float)a0;
- (char)isEqualToFloat:(id)a0;

@end

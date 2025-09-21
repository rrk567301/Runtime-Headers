@interface AMSBoolean : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char value;

+ (id)booleanWithBool:(char)a0;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBool:(char)a0;
- (char)isEqualToBool:(id)a0;

@end

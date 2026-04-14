@interface DIAttributeFooter : DIAttributeLabel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setDefaultValue:(id)a0;
- (id)defaultValue;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

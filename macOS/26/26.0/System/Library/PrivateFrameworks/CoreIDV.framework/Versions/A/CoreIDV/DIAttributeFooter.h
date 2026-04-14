@interface DIAttributeFooter : DIAttributeLabel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setDefaultValue:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

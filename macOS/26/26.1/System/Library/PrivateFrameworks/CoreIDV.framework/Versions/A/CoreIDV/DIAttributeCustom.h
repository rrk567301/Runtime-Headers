@interface DIAttributeCustom : DIAttributeText <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)defaultValue;
- (void)setDefaultValue:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setCurrentValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)submissionString;
- (id)getCurrentValue;

@end

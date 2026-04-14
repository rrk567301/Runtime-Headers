@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding> {
    unsigned long long _validityInSeconds;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long validityInSeconds;

- (void)setDefaultValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (void)setCurrentValue:(id)a0;
- (id)description;
- (id)init;
- (id)submissionString;
- (id)getCurrentValue;

@end

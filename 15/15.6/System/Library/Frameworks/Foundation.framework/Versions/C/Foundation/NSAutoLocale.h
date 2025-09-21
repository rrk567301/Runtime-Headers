@interface NSAutoLocale : NSLocale

+ (char)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

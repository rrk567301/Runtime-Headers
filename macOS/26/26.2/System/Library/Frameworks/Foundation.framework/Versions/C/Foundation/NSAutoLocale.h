@interface NSAutoLocale : NSLocale

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end

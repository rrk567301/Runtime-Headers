@interface NSAutoLocale : NSLocale

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

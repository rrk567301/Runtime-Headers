@interface NSInflectionRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char canInflectPreferredLocalization;
@property (class, readonly) NSInflectionRule *automaticRule;
@property (class, readonly) char supportsSecureCoding;

+ (char)canInflectLanguage:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end

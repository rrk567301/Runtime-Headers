@interface NSLocalizedNumberFormatRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)automatic;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_formattedString:(id)a0 withStringLocale:(id)a1 andDisplayLocale:(id)a2;

@end

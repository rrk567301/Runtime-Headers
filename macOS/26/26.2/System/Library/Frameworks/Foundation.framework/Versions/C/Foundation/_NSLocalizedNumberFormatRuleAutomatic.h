@interface _NSLocalizedNumberFormatRuleAutomatic : NSLocalizedNumberFormatRule

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_formattedString:(id)a0 withStringLocale:(id)a1 andDisplayLocale:(id)a2;
- (id)_locked_formatterForLocale:(id)a0;

@end

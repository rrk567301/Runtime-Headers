@interface _NSLocalizedNumberFormatRuleAutomatic : NSLocalizedNumberFormatRule

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_formattedString:(id)a0 withStringLocale:(id)a1 andDisplayLocale:(id)a2;
- (id)_locked_formatterForLocale:(id)a0;

@end

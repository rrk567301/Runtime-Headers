@interface XSDomainNameFormatter : XSCharacterSetFormatter

@property BOOL allowsMultipleValues;
@property BOOL allowsPortSuffix;
@property BOOL allowsWildcardDomains;
@property (nonatomic) BOOL allowsWildcardDomain;

+ (id)formatter;
+ (id)validCharacters;
+ (id)separatorCharacters;

- (id)stringForObjectValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)init;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isStringValid:(id)a0;
- (BOOL)isStringValidDomain:(id)a0;

@end

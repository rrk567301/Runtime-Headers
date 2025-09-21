@interface XSDomainNameFormatter : XSCharacterSetFormatter

@property char allowsMultipleValues;
@property char allowsPortSuffix;
@property char allowsWildcardDomains;
@property (nonatomic) char allowsWildcardDomain;

+ (id)formatter;
+ (id)validCharacters;
+ (id)separatorCharacters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (char)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)stringForObjectValue:(id)a0;
- (char)isStringValid:(id)a0;
- (char)isStringValidDomain:(id)a0;

@end

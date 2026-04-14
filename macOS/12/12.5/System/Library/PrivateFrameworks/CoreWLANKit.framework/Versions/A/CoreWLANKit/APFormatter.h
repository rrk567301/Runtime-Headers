@class NSCharacterSet;

@interface APFormatter : NSFormatter {
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
}

@property unsigned long long maxLength;

+ (id)maxLengthFormatter:(int)a0;
+ (id)romanSet;
+ (id)ipAddressSet;
+ (id)multipleIpAddressesSet;
+ (id)phoneNumberSet;
+ (id)asciiSet;
+ (id)ascii7BitSet;
+ (id)hexSet;
+ (id)domainNameSet;
+ (id)romanFormatter:(int)a0;
+ (id)sharedIPFormatter;
+ (id)ipFormatter:(int)a0;
+ (id)sharedMultipleIPFormatter;
+ (id)multipleIPFormatter:(int)a0;
+ (id)numberOnlyFormatter:(int)a0;
+ (id)nonZeroNumberOnly:(int)a0;
+ (id)sharedPhoneNumberFormatter;
+ (id)phoneNumberFormatter:(int)a0;
+ (id)asciiFormatter:(int)a0;
+ (id)ascii7BitFormatter:(int)a0;
+ (id)hexFormatter:(int)a0;
+ (id)sharedDomainNameFormatter;
+ (id)domainNameFormatter:(int)a0;
+ (id)pogoPasswordSet;

- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)initWithMaxLength:(int)a0;
- (id)characterSet;
- (void)setCharacterSet:(id)a0;
- (id)initWithCharacterSet:(id)a0 withMaxLength:(int)a1;
- (void)setInvertedCharacterSet:(id)a0;
- (id)invertedCharacterSet;
- (id)initWithStringOfValidCharacters:(id)a0 withMaxLength:(int)a1;

@end

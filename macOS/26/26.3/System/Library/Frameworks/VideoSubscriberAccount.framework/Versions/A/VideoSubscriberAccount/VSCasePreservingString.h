@class NSString;

@interface VSCasePreservingString : NSString {
    NSString *_underlyingString;
}

- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)lowercaseString;
- (id)initWithString:(id)a0;
- (id)uppercaseString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)a0;
- (id)localizedCapitalizedString;
- (id)localizedLowercaseString;
- (id)localizedUppercaseString;

@end

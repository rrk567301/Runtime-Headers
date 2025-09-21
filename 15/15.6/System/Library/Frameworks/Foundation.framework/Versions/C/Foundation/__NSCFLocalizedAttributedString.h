@class NSString, NSAttributedString, NSDictionary;

@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {
    NSAttributedString *_original;
    NSString *_apparentString;
    NSDictionary *_formatConfiguration;
}

@property (class, readonly) char supportsSecureCoding;

+ (struct __CFString { } *)copyStringWithMarkdown:(struct __CFString { } *)a0 formatConfiguration:(struct __CFDictionary { } *)a1 bundle:(struct __CFBundle { } *)a2 tableURL:(struct __CFURL { } *)a3;
+ (struct __CFString { } *)createStringRequiringInflectionWithFormat:(struct __CFString { } *)a0 formatOptions:(struct __CFDictionary { } *)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
+ (id)stringEncapsulatingBaseAttributedString:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const char *)_fastCStringContents:(char)a0;
- (unsigned long long)length;
- (unsigned long long)fastestEncoding;
- (const unsigned short *)_fastCharacterContents;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)formatConfiguration;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (char)isEqualToString:(id)a0;
- (id)substringFromIndex:(unsigned long long)a0;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)substringToIndex:(unsigned long long)a0;
- (id)__baseAttributedString;
- (id)_initWithAttributedString:(id)a0;
- (id)initWithAttributedStringMarkdown:(id)a0 formatConfiguration:(id)a1 bundle:(struct __CFBundle { } *)a2 tableURL:(id)a3;

@end

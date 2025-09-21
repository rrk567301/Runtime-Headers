@class NSString;

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSString *string;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)_attributedStringWithFormat:(id)a0 attributeOptions:(unsigned long long)a1 formattingOptions:(id)a2 locale:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
+ (id)_attributedStringWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
+ (id)_localizedAttributedStringWithFormat:(id)a0;
+ (id)_localizedAttributedStringWithFormat:(id)a0 options:(unsigned long long)a1;
+ (void)_setAttributedDictionaryClass:(Class)a0;
+ (id)localizedAttributedStringWithFormat:(id)a0;
+ (id)localizedAttributedStringWithFormat:(id)a0 context:(id)a1;
+ (id)localizedAttributedStringWithFormat:(id)a0 options:(unsigned long long)a1;
+ (id)localizedAttributedStringWithFormat:(id)a0 options:(unsigned long long)a1 context:(id)a2;

- (id)cs_rangesMatchingPredicate:(id)a0;
- (void)cs_writeToFileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)cs_writeToFileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 supportingANSIEscapeCodes:(char)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (unsigned long long)_cfTypeID;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAttributedString:(id)a0;
- (id)_initWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2;
- (id)__initWithFormat:(id)a0 attributeOptions:(unsigned long long)a1 formattingOptions:(id)a2 locale:(id)a3 context:(id)a4 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
- (id)__initWithFormat:(id)a0 attributeOptions:(unsigned long long)a1 formattingOptions:(id)a2 locale:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
- (char)_attributesAreEqualToAttributesInAttributedString:(id)a0;
- (id)_firstValueOfAttributeWithKey:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_identicalAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_inflectedAttributedString;
- (id)_initWithFormat:(id)a0 attributeOptions:(unsigned long long)a1 formattingOptions:(id)a2 locale:(id)a3;
- (id)_initWithFormat:(id)a0 attributeOptions:(unsigned long long)a1 formattingOptions:(id)a2 locale:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
- (id)_initWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
- (void)_markIntentsResolved;
- (void)_markRequiringIntentResolution;
- (char)_mayRequireIntentResolution;
- (char)_willRequireIntentResolutionWhenContainingAttribute:(id)a0 value:(id)a1;
- (char)_willRequireIntentResolutionWhenContainingAttributes:(id)a0;
- (id)attributedStringByInflectingString;
- (id)attributedStringByWeaklyAddingAttributes:(id)a0;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacingCharactersInRanges:(const struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 numberOfRanges:(long long)a2 withString:(id)a3;
- (void)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithContentsOfMarkdownFileAtURL:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2;
- (id)initWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
- (id)initWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2 context:(id)a3;
- (id)initWithFormat:(id)a0 options:(unsigned long long)a1 locale:(id)a2 context:(id)a3 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a4;
- (id)initWithMarkdown:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)initWithMarkdownString:(id)a0 options:(id)a1 baseURL:(id)a2 error:(id *)a3;
- (id)replacementObjectForPortCoder:(id)a0;
- (char)scriptingBeginsWith:(id)a0;
- (char)scriptingContains:(id)a0;
- (char)scriptingEndsWith:(id)a0;
- (char)scriptingIsEqualTo:(id)a0;
- (char)scriptingIsGreaterThan:(id)a0;
- (char)scriptingIsGreaterThanOrEqualTo:(id)a0;
- (char)scriptingIsLessThan:(id)a0;
- (char)scriptingIsLessThanOrEqualTo:(id)a0;

@end

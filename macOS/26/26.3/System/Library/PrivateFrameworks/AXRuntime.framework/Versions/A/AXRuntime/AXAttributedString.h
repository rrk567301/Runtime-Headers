@interface AXAttributedString : NSMutableString <NSCopying> {
    struct __CFAttributedString { } *_string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)a0;

- (void)setAttributes:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAttributes:(id)a0;
- (unsigned long long)length;
- (id)attributedString;
- (id)stringByTrimmingCharactersInSet:(id)a0;
- (id)attributesAtIndex:(long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (BOOL)hasAttribute:(id)a0;
- (id)substringFromIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)description;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)appendFormat:(id)a0;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)convertAttachmentsWithBlock:(id /* block */)a0;
- (void)enumerateAttribute:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAttributes:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)addAttribute:(id)a0 forKey:(id)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)appendString:(id)a0;
- (struct __CFAttributedString { } *)cfAttributedString;
- (Class)classForCoder;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)a0;
- (id)initWithCFAttributedString:(struct __CFAttributedString { } *)a0;
- (BOOL)hasAttributes;
- (id)lowercaseString;
- (id)initWithString:(id)a0;
- (id)uppercaseString;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)coalescedAttributes;
- (void)enumerateAttributesUsingBlock:(id /* block */)a0;
- (void)appendAXAttributedString:(id)a0;
- (id)axAttributedStringDescription;
- (id)coalescedFontAttributes;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)axAttributedStringByReplacingOccurrencesOfString:(id)a0 withString:(id)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)axStringByReplacingCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)string;
- (id)stringByReplacingOccurrencesOfString:(id)a0 withString:(id)a1 options:(unsigned long long)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (BOOL)isAXAttributedString;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (void)appendStringOrAXAttributedString:(id)a0;
- (id)attributeValueForKey:(id)a0;
- (void)replaceString:(struct __CFString { } *)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithStringOrAttributedString:(id)a0;

@end

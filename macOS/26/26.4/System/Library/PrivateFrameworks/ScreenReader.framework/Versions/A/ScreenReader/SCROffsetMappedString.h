@class NSMutableAttributedString, NSMutableArray;

@interface SCROffsetMappedString : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setMutableAttributedString:) NSMutableAttributedString *_mutableAttributedString;
@property (retain, nonatomic, setter=_setOffsetMapArray:) NSMutableArray *_offsetMapArray;

- (void)insertString:(id)a0 atIndex:(unsigned long long)a1;
- (void)appendString:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)encodeWithCoder:(id)a0;
- (void)appendAttributedString:(id)a0;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)init;
- (id)string;
- (id)attributedString;
- (id)description;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)initWithCoder:(id)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)setOriginalString:(id)a0;
- (id)composedCharacterAtIndex:(unsigned int)a0;
- (int)character32AtIndex:(unsigned long long)a0 returningNumberOfComposedChars:(unsigned long long *)a1;
- (void)enumerateCharacter32sInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 block:(id /* block */)a1;
- (id)_initWithSCROffsetMappedString:(id)a0;
- (void)_replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withLength:(long long)a1;
- (void)addAttributes:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)appendOffsetMappedString:(id)a0;
- (long long)originalOffsetForCharacterIndex:(long long)a0;
- (BOOL)replaceRegex:(struct URegularExpression { } *)a0 withString:(id)a1 withAttributes:(id)a2;
- (void)setOriginalAttributedString:(id)a0;

@end

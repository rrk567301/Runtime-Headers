@interface CRTextStorageBase : NSTextStorage

- (unsigned long long)length;
- (id)string;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (char)_shouldSetOriginalFontAttribute;
- (id)mutableAttributedString;

@end

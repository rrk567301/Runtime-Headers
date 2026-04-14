@class NSString;

@interface PDFAccessibilityNodeContent : PDFAccessibilityNode

@property (copy, nonatomic) NSString *_stringValue;
@property struct _NSRange { unsigned long long location; unsigned long long length; } _textRange;
@property BOOL isRangeCalculated;

- (id)accessibilityRole;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;
- (void).cxx_destruct;
- (id)description;
- (id)accessibilityValue;
- (id)stringValue;
- (id)initWithParent:(id)a0;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)accessibilityLineForIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForLine:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (struct CGPDFTaggedNode { } *)nodeRef;

@end

@class NSString;

@interface PDFAccessibilityNodeText : PDFAccessibilityNode

@property (readonly, nonatomic) NSString *stringValue;

- (id)description;
- (void).cxx_destruct;
- (id)accessibilityRole;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForLine:(long long)a0;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)accessibilityLineForIndex:(long long)a0;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilitySelectedTextRanges;
- (void)setAccessibilitySelectedTextRanges:(id)a0;
- (struct CGPDFLayout { } *)_pageLayout;
- (BOOL)_containsNonTextNodes;
- (id)_annotationNodesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end

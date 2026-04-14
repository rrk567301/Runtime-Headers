@class NSString;

@interface PDFAccessibilityNodeText : PDFAccessibilityNode

@property (readonly, nonatomic) NSString *stringValue;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityValue;
- (id)description;
- (id)accessibilityTitle;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)accessibilitySelectedTextRanges;
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
- (void)setAccessibilitySelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setAccessibilitySelectedTextRanges:(id)a0;
- (id)findNodeForInsertingAnnotation:(id)a0;
- (BOOL)_containsNonTextNodes;
- (unsigned long long)areaOverlappingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)insertAnnotation:(id)a0;

@end

@class PDFAnnotation;

@interface PDFAccessibilityNodeAnnotation : PDFAccessibilityNode

@property (weak, nonatomic) PDFAnnotation *annotation;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (id)accessibilityChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isAccessibilityFocused;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForLine:(long long)a0;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)accessibilityLineForIndex:(long long)a0;
- (BOOL)accessibilityPerformPress;
- (void)setAccessibilityFocused:(BOOL)a0;
- (id)accessibilityURL;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityTitleUIElement;
- (BOOL)isAccessibilityEnabled;
- (void)setAccessibilityEnabled:(BOOL)a0;
- (id)accessibilityRows;
- (long long)accessibilityInsertionPointLineNumber;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySharedCharacterRange;
- (id)accessibilitySharedTextUIElements;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilitySelectedText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilitySelectedTextRanges;
- (id)_control;
- (id)_textView;
- (void)setPage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;
- (id)_annotationText;
- (id)textNodeRepresentation;
- (id)_annotationSelection;
- (struct CGPDFTaggedNode { } *)_associatedImageNodeRef;
- (BOOL)isAnnotationType:(id)a0;
- (BOOL)isValidAccessibilityElement;
- (BOOL)hasEquivalentTextNodeRepresentation;
- (BOOL)isTextWidget;
- (BOOL)_isPressableWidget;
- (id)_pageView;
- (id)nextNodeWithAnnotationType:(id)a0;
- (id)accessibilityNodeRepresentation;

@end

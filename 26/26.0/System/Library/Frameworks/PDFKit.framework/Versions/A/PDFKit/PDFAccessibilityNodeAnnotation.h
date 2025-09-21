@class NSString, PDFAnnotation;

@interface PDFAccessibilityNodeAnnotation : PDFAccessibilityNode

@property (weak, nonatomic) PDFAnnotation *annotation;
@property (retain, nonatomic) NSString *labelText;

+ (id)localizationManager;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)setPage:(id)a0;
- (id)accessibilityLabel;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_textView;
- (id)accessibilityValue;
- (void)setAccessibilityValue:(id)a0;
- (id)description;
- (id)accessibilityRole;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilitySelectedTextRanges;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityHelp;
- (long long)accessibilityInsertionPointLineNumber;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (long long)accessibilityLineForIndex:(long long)a0;
- (BOOL)accessibilityPerformPress;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForLine:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleDescription;
- (id)accessibilityRows;
- (id)accessibilitySelectedText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySharedCharacterRange;
- (id)accessibilitySharedTextUIElements;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityTitleUIElement;
- (id)accessibilityURL;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityFocused;
- (void)setAccessibilityEnabled:(BOOL)a0;
- (void)setAccessibilityFocused:(BOOL)a0;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_setupTextView;
- (id)_annotationText;
- (void)_activateAnnotation;
- (id)_annotationSelection;
- (struct CGPDFTaggedNode { } *)_associatedImageNodeRef;
- (id)_control;
- (BOOL)_isPressableWidget;
- (id)_pageView;
- (void)_redirectNotifications:(id)a0;
- (void)_reinsertAnnotation;
- (void)_setSignatureWidgetAsKeyboardFocused:(BOOL)a0;
- (void)_teardownTextView;
- (unsigned long long)areaOverlappingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1;
- (void)interactWithAnnotation:(id)a0;
- (BOOL)isAnnotationType:(id)a0;
- (BOOL)isTextWidget;
- (BOOL)isValidAccessibilityElement;

@end

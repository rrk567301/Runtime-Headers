@class NSArray;

@interface VKCImageTextSelectionAccessibilityElement_macOS : NSAccessibilityElement

@property (retain, nonatomic) NSArray *textBlocks;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectionRange;

+ (id)elementsForDocument:(id)a0 parent:(id)a1;

- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (id)accessibilityAttributeValue:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRangeForLine:(long long)a0;
- (id)accessibilityStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)accessibilityLineForIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilitySelectedText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilitySelectedTextRange;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithObservation:(id)a0 parent:(id)a1;
- (void)_setupElementWithObservation:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_elementRangeForDocumentTextRange:(id)a0;
- (id)_documentTextRangeForElementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id /* block */)_selectTextElement;
- (void)updateAccessibilityFrame;
- (void)updateAccessibilitySelectedTextRange;

@end

@class SCRWebStitchedTextContent, NSString, NSArray, NSAttributedString, NSMutableArray;

@interface SCRWebStitchedText : SCRTextField {
    NSArray *_uiElements;
    NSMutableArray *_uiElementTextRanges;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (copy, nonatomic) NSString *_stitchedTextValueDescription;
@property (copy, nonatomic) NSAttributedString *_stitchedAttributedValueDescription;
@property (retain, nonatomic) SCRWebStitchedTextContent *_stitchedTextContent;
@property (copy, nonatomic) NSAttributedString *_attributedContent;

+ (id)stitchedTextForElement:(id)a0 textChildUIElement:(id)a1;
+ (id)stitchedTextForElement:(id)a0 textChildUIElement:(id)a1 index:(unsigned long long *)a2;

- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (id)value;
- (id)role;
- (id)typeDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)visibleCharacterRange;
- (id)valueDescription;
- (id)statusDescription;
- (id)uiElements;
- (unsigned long long)numberOfCharacters;
- (unsigned long long)cachedNumberOfCharacters;
- (char)shouldMap;
- (id)uiElement;
- (id)attributedStringForRange:(id)a0;
- (void)clearCachedValue;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRange:(id)a0;
- (id)_attributedStringForUIElementRange;
- (unsigned long long)_indexOfUIElementAtPosition:(unsigned long long)a0;
- (void)_initializeStitchingData;
- (char)_moveToNextElementWithEvent:(id)a0 request:(id)a1 movingForward:(char)a2;
- (void)_updateInitializedAttributedContentForUIElement:(id)a0 stitchedContent:(id)a1 content:(id)a2 attributedContent:(id)a3 attributedValue:(id)a4;
- (id)attributedValueDescription;
- (struct __AXTextMarker { } *)axTextMarkerRefForIndex:(unsigned long long)a0;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (char)elementRepresentsUIElement:(id)a0;
- (id)firstNavigableUIElement;
- (id)initWithUIElements:(id)a0 parent:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isWebElement;
- (id)lineAfterRange:(id)a0 affinity:(long long)a1;
- (char)moveToNextParagraphWithOutputRequest:(id)a0 event:(id)a1;
- (char)moveToNextSentenceWithOutputRequest:(id)a0 event:(id)a1;
- (char)moveToNextWordWithOutputRequest:(id)a0 event:(id)a1;
- (char)moveToPreviousParagraphWithOutputRequest:(id)a0 event:(id)a1;
- (char)moveToPreviousSentenceWithOutputRequest:(id)a0 event:(id)a1;
- (char)moveToPreviousWordWithOutputRequest:(id)a0 event:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUIElement:(id)a0;
- (char)shouldNavigate;
- (id)uiElementAtPosition:(unsigned long long)a0;
- (id)uiElementAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)uiElementForObserving;
- (char)valueHasOffscreenComponent:(id)a0;

@end

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

- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)role;
- (id)value;
- (id)typeDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)visibleCharacterRange;
- (id)valueDescription;
- (id)statusDescription;
- (id)attributedStringForRange:(id)a0;
- (id)uiElements;
- (unsigned long long)numberOfCharacters;
- (BOOL)shouldMap;
- (unsigned long long)cachedNumberOfCharacters;
- (id)uiElement;
- (void)clearCachedValue;
- (BOOL)moveToPreviousWordWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToNextWordWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToPreviousSentenceWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToNextSentenceWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToPreviousParagraphWithOutputRequest:(id)a0 event:(id)a1;
- (BOOL)moveToNextParagraphWithOutputRequest:(id)a0 event:(id)a1;
- (id)lineAfterRange:(id)a0 affinity:(long long)a1;
- (BOOL)interactUpWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactDownWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactLeftWithEvent:(id)a0 request:(id)a1;
- (BOOL)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)attributedValueDescription;
- (BOOL)shouldNavigate;
- (id)uiElementForObserving;
- (BOOL)isWebElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRange:(id)a0;
- (id)uiElementAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)valueHasOffscreenComponent:(id)a0;
- (struct __AXTextMarker { } *)axTextMarkerRefForIndex:(unsigned long long)a0;
- (id)_attributedStringForUIElementRange;
- (id)initWithUIElements:(id)a0 parent:(id)a1;
- (void)_initializeStitchingData;
- (unsigned long long)_indexOfUIElementAtPosition:(unsigned long long)a0;
- (BOOL)_moveToNextElementWithEvent:(id)a0 request:(id)a1 movingForward:(BOOL)a2;
- (id)firstNavigableUIElement;
- (BOOL)elementRepresentsUIElement:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUIElement:(id)a0;
- (id)uiElementAtPosition:(unsigned long long)a0;

@end

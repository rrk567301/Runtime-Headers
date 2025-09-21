@class SCRWebArea;

@interface SCRWebText : SCRTextElement

@property (retain, nonatomic, setter=_setWebAreaRepresentation:) SCRWebArea *_webAreaRepresentation;

- (void)dealloc;
- (id)stringForRange:(id)a0;
- (id)selectedTextRange;
- (id)visibleCharacterRange;
- (id)valueDescription;
- (void)setSelectedTextRange:(id)a0;
- (id)lastPosition;
- (char)openContextualMenu;
- (id)attributedStringForRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForRange:(id)a0;
- (id)sentenceEndMarkerAfterPosition:(id)a0;
- (id)_characterMarkerFromPosition:(id)a0 next:(char)a1;
- (char)_isLineEndPosition:(id)a0 forLineRange:(id)a1;
- (char)_isLineStartPosition:(id)a0 forLineRange:(id)a1;
- (void)_registerForSelectionChangedNotification;
- (void)addLineInfoSummaryToRequest:(id)a0;
- (char)allowsDragForUIElement:(id)a0;
- (id)attributedValueDescription;
- (id)axVisibleCharacterRange;
- (id)characterMarkerAfterPosition:(id)a0;
- (id)characterMarkerBeforePosition:(id)a0;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (void)echoDataInRange:(id)a0 request:(id)a1 showOnScreen:(char)a2 feedbackType:(long long)a3 withScrolling:(char)a4;
- (void)echoDataInRange:(id)a0 request:(id)a1 showOnScreen:(char)a2 feedbackType:(long long)a3 withScrolling:(char)a4 braille:(char)a5;
- (id)firstPosition;
- (char)focusInto:(id)a0 event:(id)a1;
- (char)handleEvent:(id)a0 request:(id)a1;
- (void)handleTextSelectionChange;
- (char)isContainerElement;
- (char)isSelectionSettable;
- (char)isWebElement;
- (char)isWebText;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })localRangeOfTextMarkerRange:(id)a0 insideTextMarkerRange:(id)a1;
- (id)markerForScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)paragraphEndMarkerAfterPosition:(id)a0;
- (id)paragraphRangeForPosition:(id)a0;
- (id)paragraphStartMarkerBeforePosition:(id)a0;
- (id)previousSelectionRange;
- (id)rangeForStartMarker:(id)a0 withOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (void)readCurrentParagraph:(id)a0;
- (void)readCurrentSentence:(id)a0;
- (char)readNextParagraph:(id)a0;
- (char)readNextSentence:(id)a0;
- (char)readPreviousParagraph:(id)a0;
- (char)readPreviousSentence:(id)a0;
- (id)sentenceRangeForPosition:(id)a0;
- (id)styleRangeForPosition:(id)a0;
- (char)synchKeyboardToVOCursor:(id)a0;
- (char)tabOrDrillInShouldTempDisableQuickNav;
- (id)textMarkerForString:(id)a0 startingAtUIElement:(id)a1 searchOptions:(unsigned long long)a2;
- (id)wordRangeAfterPosition:(id)a0;
- (id)wordRangeBeforePosition:(id)a0;
- (id)wordRangeForPosition:(id)a0;

@end

@class NSString;

@interface SCROpaqueElementProviderGroup : SCRElement

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousFocusedElementFrameInMyCoordinates;
@property (retain, nonatomic) NSString *_previousFocusedElementEquivalenceTag;

- (void).cxx_destruct;
- (id)roleDescription;
- (char)isInteractive;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (char)childrenShouldAddIndexToDescription;
- (unsigned long long)directInteractionArrowCaptureMask;
- (id)firstChildForFocusing;
- (id)focusOntoUIElement:(id)a0 withScrolling:(char)a1 withSelection:(char)a2;
- (long long)groupBehavior;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (char)isContainerElement;
- (char)isSectionView;
- (char)moveFocusToContentSibling:(id)a0 inDirection:(long long)a1 onMove:(id /* block */)a2 scrollToElement:(char)a3 speakDescription:(char)a4 request:(id)a5;
- (char)moveToContentSiblingAboveWithRequest:(id)a0;
- (char)moveToContentSiblingBelowWithRequest:(id)a0;
- (char)moveToFirstElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToFirstVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToLastVisibleElementWithEvent:(id)a0 request:(id)a1;
- (char)moveToNextContentSiblingWithRequest:(id)a0;
- (char)moveToPreviousContentSiblingWithRequest:(id)a0;
- (unsigned long long)readContentsElementCount;
- (void)setFocusedChild:(id)a0;
- (char)shouldSpeakItemCountWhenFocusingIn;

@end

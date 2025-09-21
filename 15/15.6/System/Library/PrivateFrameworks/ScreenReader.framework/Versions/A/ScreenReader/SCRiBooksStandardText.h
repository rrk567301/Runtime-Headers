@interface SCRiBooksStandardText : SCRStandardText

@property (nonatomic) char didPerformTurnPage;
@property (nonatomic) struct { long long type; struct { long long direction; long long granularity; } selection; } lastTextCommand;
@property (nonatomic) char turnedPageFromReadAll;

- (char)scrollToNextPage;
- (void)_conditionallyTurnPage:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0 request:(id)a1;
- (char)interactRightWithEvent:(id)a0 request:(id)a1;
- (id)_adjacentChapterContainter:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0;
- (void)_handlePageScrolled:(id)a0;
- (void)_iBooksPerformTurnPage:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0;
- (char)_iBooksShouldTurnPage:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0;
- (char)addContentSummaryToRequest:(id)a0;
- (void)addTextBoundryToRequest:(id)a0 edge:(long long)a1;
- (id)captionDescription;
- (char)handleReadContentsCallbackForEvent:(id)a0 request:(id)a1 visibleOnly:(char)a2;
- (void)iBooksAdvanceToNextTextElementWithEvent:(id)a0 request:(id)a1;
- (id)iBooksFirstMarker;
- (id)iBooksFocusIntoTextUIElement:(id)a0 withEvent:(id)a1 request:(id)a2 direction:(long long)a3;
- (char)iBooksHasReachedBeginningOfTextElementWithGranularity:(long long)a0;
- (char)iBooksHasReachedEndOfTextElementWithGranularity:(long long)a0;
- (id)iBooksInteractWithoutBoundaryCheckWithEvent:(id)a0 request:(id)a1 direction:(long long)a2;
- (id)iBooksLastMarker;
- (char)iBooksMarkerIsInNextSibling:(id)a0;
- (char)iBooksMarkerIsInPreviousSibling:(id)a0;
- (id)iBooksMoveToTextElementWithEvent:(id)a0 request:(id)a1 direction:(long long)a2;
- (char)interactDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactDownWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactLeftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownCommandWithEvent:(id)a0 request:(id)a1;
- (char)interactPageDownShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpCommandWithEvent:(id)a0 request:(id)a1;
- (char)interactPageUpShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactRightShiftWithEvent:(id)a0 request:(id)a1;
- (char)interactUpWithEvent:(id)a0 request:(id)a1;
- (id)lineAfterRange:(id)a0 affinity:(long long)a1;
- (id)nextLineRangeForPosition:(id)a0;
- (char)readContentAtBoundaryWithTextCommand:(struct { long long x0; struct { long long x0; long long x1; } x1; })a0 request:(id)a1;
- (char)scrollToPreviousPage;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;

@end

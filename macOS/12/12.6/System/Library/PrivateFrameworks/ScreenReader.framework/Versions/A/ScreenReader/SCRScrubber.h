@interface SCRScrubber : SCRElement

- (id)firstChildForFocusing;
- (id)prepareArrayToFocusInto;
- (id)childBeforeElement:(id)a0;
- (id)childAfterElement:(id)a0;
- (BOOL)allowBuildChildren;
- (unsigned long long)indexOfElement:(id)a0 visibleOnly:(BOOL)a1;
- (BOOL)scrollToShowDescendant:(id)a0;
- (id)lastChildForFocusing;
- (long long)brailleLineType;
- (id)childAtIndex:(unsigned long long)a0 visibleOnly:(BOOL)a1;

@end

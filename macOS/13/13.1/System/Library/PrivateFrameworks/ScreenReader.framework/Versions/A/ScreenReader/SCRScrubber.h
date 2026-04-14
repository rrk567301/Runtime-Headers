@interface SCRScrubber : SCRElement

- (BOOL)allowBuildChildren;
- (unsigned long long)indexOfElement:(id)a0 visibleOnly:(BOOL)a1;
- (id)childBeforeElement:(id)a0;
- (id)childAfterElement:(id)a0;
- (long long)brailleLineType;
- (id)prepareArrayToFocusInto;
- (id)firstChildForFocusing;
- (id)lastChildForFocusing;
- (id)childAtIndex:(unsigned long long)a0 visibleOnly:(BOOL)a1;
- (BOOL)scrollToShowDescendant:(id)a0;

@end

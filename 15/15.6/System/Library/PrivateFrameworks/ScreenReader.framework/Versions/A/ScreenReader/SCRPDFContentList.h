@interface SCRPDFContentList : SCRList

- (id)statusDescription;
- (char)_isSubLevelList;
- (char)focusInto:(id)a0 event:(id)a1;
- (long long)groupBehavior;
- (id)prepareArrayToFocusInto;
- (char)shouldAutoFocusOnChildren;
- (char)shouldSpeakItemCountWhenFocusingIn;

@end

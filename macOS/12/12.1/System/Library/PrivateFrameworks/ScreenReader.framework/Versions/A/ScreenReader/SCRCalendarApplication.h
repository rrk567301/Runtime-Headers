@interface SCRCalendarApplication : SCRApplication

- (BOOL)supportsContentChooser;
- (void)createContentChooserGuideItemsForGuide:(id)a0 guideInfo:(id)a1;
- (BOOL)handleRotorContentChooserMoveInDirection:(long long)a0 request:(id)a1;
- (id)_guideItemsForEventElements:(id)a0 guide:(id)a1;
- (id)_destinationElementForContentChooserElements:(id)a0 fromElement:(id)a1 direction:(long long)a2;
- (BOOL)isCalendarApplication;

@end

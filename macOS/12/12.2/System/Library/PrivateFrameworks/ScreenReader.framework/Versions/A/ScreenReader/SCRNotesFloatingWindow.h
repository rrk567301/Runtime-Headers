@interface SCRNotesFloatingWindow : SCRWindow

- (id)titleDescription;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)canNavigateToChildren;
- (id)_filterExistingDescription;

@end

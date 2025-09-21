@interface SCRToolbar : SCRMapElement

- (id)typeDescription;
- (char)allowFocusThroughSingleChild;
- (char)isContainerElement;
- (char)isSectionView;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (char)shouldNavigate;

@end

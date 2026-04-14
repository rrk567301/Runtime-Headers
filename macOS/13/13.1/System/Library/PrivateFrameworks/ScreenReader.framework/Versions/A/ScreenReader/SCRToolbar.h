@interface SCRToolbar : SCRMapElement

- (id)typeDescription;
- (BOOL)isSectionView;
- (BOOL)isContainerElement;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)shouldNavigate;

@end

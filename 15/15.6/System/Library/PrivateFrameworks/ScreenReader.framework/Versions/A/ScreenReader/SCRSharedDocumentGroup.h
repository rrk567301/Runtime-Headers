@interface SCRSharedDocumentGroup : SCRGroup

- (char)_moveToNextPageInForwardDirection:(char)a0;
- (id)firstChildForFocusing;
- (char)handleReachingBoundaryForEvent:(id)a0 forward:(char)a1 request:(id)a2;
- (char)isContainerElement;
- (char)isSectionView;
- (char)moveDownWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(char)a2;
- (char)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(char)a2;
- (char)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(char)a2;
- (char)moveUpWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(char)a2;
- (char)shouldFocusOntoChild:(id)a0;

@end

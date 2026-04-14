@interface SCRSharedDocumentGroup : SCRGroup

- (BOOL)isContainerElement;
- (BOOL)moveFirstWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)moveLastWithEvent:(id)a0 request:(id)a1 visibleOnly:(BOOL)a2;
- (BOOL)_moveToNextPageInForwardDirection:(BOOL)a0;
- (BOOL)moveDownWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)shouldFocusOntoChild:(id)a0;
- (BOOL)moveUpWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)handleReachingBoundaryForEvent:(id)a0 forward:(BOOL)a1 request:(id)a2;

@end

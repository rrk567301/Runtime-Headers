@interface SCRGrid : SCRList

- (unsigned long long)_columnCount;
- (unsigned long long)_rowCount;
- (void)updateOrientation;
- (void)addItemDescriptionToRequest:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)_moveUpWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveDownWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveLeftWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveRightWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)shouldSynchVOCursorToSelectionChange;

@end

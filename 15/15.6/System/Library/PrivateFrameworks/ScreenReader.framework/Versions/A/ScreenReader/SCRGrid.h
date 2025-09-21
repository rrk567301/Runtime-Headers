@interface SCRGrid : SCRList

@property (nonatomic) long long previousLineIndex;

- (unsigned long long)_columnCount;
- (unsigned long long)_rowCount;
- (void)updateOrientation;
- (char)_moveDownWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(char)a2;
- (char)_moveInDirection:(long long)a0 event:(id)a1 request:(id)a2 allowFullWrapping:(char)a3;
- (char)_moveLeftWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(char)a2;
- (char)_moveRightWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(char)a2;
- (char)_moveUpWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(char)a2;
- (void)addItemDescriptionToRequest:(id)a0;
- (char)allowFocusThroughSingleChild;
- (unsigned long long)directInteractionArrowCaptureMask;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setBrailleLineWithFocusedElement:(id)a0 forceRebuild:(char)a1;
- (char)shouldSynchVOCursorToSelectionChange;

@end

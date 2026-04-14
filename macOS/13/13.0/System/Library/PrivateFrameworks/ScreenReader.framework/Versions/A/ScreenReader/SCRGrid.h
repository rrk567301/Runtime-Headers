@interface SCRGrid : SCRList

@property (nonatomic) long long previousLineIndex;

- (unsigned long long)_columnCount;
- (unsigned long long)_rowCount;
- (void)updateOrientation;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setBrailleLineWithFocusedElement:(id)a0 forceRebuild:(BOOL)a1;
- (BOOL)_moveUpWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveDownWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveLeftWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (BOOL)_moveRightWithEvent:(id)a0 request:(id)a1 allowFullWrapping:(BOOL)a2;
- (void)addItemDescriptionToRequest:(id)a0;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)shouldSynchVOCursorToSelectionChange;

@end

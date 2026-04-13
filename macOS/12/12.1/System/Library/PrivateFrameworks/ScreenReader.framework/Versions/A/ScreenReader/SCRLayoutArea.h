@class NSString, SCRCTargetSelectorTimer, NSArray;

@interface SCRLayoutArea : SCRMapElement {
    struct { unsigned char registeredSelectedChildrenMovedNotification : 1; } _srlFlags;
    SCRCTargetSelectorTimer *_echoDelayTimer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectedChildrenBounds;
    struct CGPoint { double x; double y; } _lastEchoedSelectedChildrenOrigin;
    NSArray *_previousSelectionUIElements;
}

@property (retain, nonatomic) NSString *lastPositionDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)measurementUnit;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)setPreviousSelectionUIElements:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)isContainerElement;
- (void)echoCurrentSelectionWithQueueID:(id)a0 interruptsRequests:(BOOL)a1 excludingIdentifiers:(id)a2;
- (void)handleSelectionChange:(id)a0;
- (BOOL)isSectionView;
- (id)previousSelectionUIElements;
- (id)descriptionForScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)descriptionForSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1;
- (id)descriptionForSizeOffset:(double)a0 forWidth:(BOOL)a1;
- (BOOL)addPositionDescriptionForElement:(id)a0 toRequest:(id)a1;
- (id)horizontalUnitDescription;
- (id)verticalUnitDescription;
- (id)_selectedLayoutItems;
- (void)setSelectedChildrenBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dispatchLayoutUpdate;
- (void)_echoSelectedChildrenPositionChangeSummary;
- (id)_echoDelayTimer;
- (void)_echoDescriptionForPositionChange:(id)a0;
- (void)_selectedChildrenMoved:(id)a0;
- (id)_valueDescriptionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })transformedPointForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsMultipleFormatUnit;
- (BOOL)supportsTransformedPointForPoint;
- (id)_offsetDescriptionForOrigin:(struct CGPoint { double x0; double x1; })a0 lastOrigin:(struct CGPoint { double x0; double x1; })a1 verticalUnitDescription:(id)a2 horizontalUnitDescription:(id)a3;
- (id)_offsetDescriptionForOrigin:(struct CGPoint { double x0; double x1; })a0 lastOrigin:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)supportsTransformedSizeForSize;
- (struct CGSize { double x0; double x1; })transformedSizeForSize:(struct CGSize { double x0; double x1; })a0;

@end

@class BKSHIDEventDeferringModality, BKSHIDEventDeferringChangeBasis, BKSHIDEventDeferringSelectionTarget;
@protocol BKSHIDEventDeferringSelectionPathSymbol;

@interface BKSMutableHIDEventDeferringModalityAssertion : BKSHIDEventDeferringModalityAssertion

@property (retain, nonatomic) id<BKSHIDEventDeferringSelectionPathSymbol> pathIdentifier;
@property (retain, nonatomic) BKSHIDEventDeferringSelectionTarget *selectionTarget;
@property (retain, nonatomic) BKSHIDEventDeferringModality *modality;
@property (retain, nonatomic) BKSHIDEventDeferringChangeBasis *basis;
@property (nonatomic) double timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTimestamp:(double)a0;
- (void)setBasis:(id)a0;
- (void)setModality:(id)a0;
- (void)setPathIdentifier:(id)a0;
- (void)setSelectionTarget:(id)a0;

@end

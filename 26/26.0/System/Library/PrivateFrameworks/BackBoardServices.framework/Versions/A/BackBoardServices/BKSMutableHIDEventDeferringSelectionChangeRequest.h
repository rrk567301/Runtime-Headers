@class BKSHIDEventDeferringChangeBasis, BKSHIDEventDeferringSelectionTarget;
@protocol BKSHIDEventDeferringSelectionPathSymbol;

@interface BKSMutableHIDEventDeferringSelectionChangeRequest : BKSHIDEventDeferringSelectionChangeRequest

@property (retain, nonatomic) id<BKSHIDEventDeferringSelectionPathSymbol> pathIdentifier;
@property (retain, nonatomic) BKSHIDEventDeferringSelectionTarget *selectionTarget;
@property (retain, nonatomic) BKSHIDEventDeferringChangeBasis *basis;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL ignoreModalities;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTimestamp:(double)a0;
- (void)setBasis:(id)a0;
- (void)setIgnoreModalities:(BOOL)a0;
- (void)setPathIdentifier:(id)a0;
- (void)setSelectionTarget:(id)a0;

@end

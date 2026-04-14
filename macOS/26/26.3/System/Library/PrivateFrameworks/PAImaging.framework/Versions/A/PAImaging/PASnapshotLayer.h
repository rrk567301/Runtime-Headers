@class _PASlotId;

@interface PASnapshotLayer : CALayer

@property (retain, nonatomic, setter=_setSlotId:) _PASlotId *slotId;

- (void)setContents:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSourceLayer:(id)a0;

@end

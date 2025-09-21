@class BKSHIDEventDisplay, BKSHIDEventDeferringTarget, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventDeferringSelectionTarget : BKSHIDEventDeferringSelectionTarget

@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringTarget *target;

- (void)setEnvironment:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplay:(id)a0;
- (void)setTarget:(id)a0;

@end

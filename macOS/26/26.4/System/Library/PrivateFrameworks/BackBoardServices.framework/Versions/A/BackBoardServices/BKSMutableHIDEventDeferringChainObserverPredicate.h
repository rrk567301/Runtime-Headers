@class BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSMutableHIDEventDeferringChainObserverPredicate : BKSHIDEventDeferringChainObserverPredicate

@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;

- (void)setDisplay:(id)a0;
- (void)setEnvironment:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

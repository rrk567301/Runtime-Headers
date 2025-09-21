@class BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSMutableEventDeferringChainIdentity : BKSEventDeferringChainIdentity

@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;

- (void)setEnvironment:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplay:(id)a0;

@end

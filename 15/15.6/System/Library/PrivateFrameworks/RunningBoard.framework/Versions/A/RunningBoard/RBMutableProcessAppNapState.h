@interface RBMutableProcessAppNapState : RBProcessAppNapState

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(char)a0;
- (void)setInactive:(char)a0;
- (void)setPreventBackgroundSockets:(char)a0;
- (void)setPreventDiskThrottle:(char)a0;
- (void)setPreventLowPriorityCPU:(char)a0;
- (void)setPreventSuppressedCPU:(char)a0;
- (void)setPreventTimerThrottle:(unsigned char)a0;
- (void)unionState:(id)a0;

@end

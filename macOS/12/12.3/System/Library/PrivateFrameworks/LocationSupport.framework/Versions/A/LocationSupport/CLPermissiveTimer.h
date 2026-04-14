@interface CLPermissiveTimer : CLTimer

- (void)invalidate;
- (void)shouldFire;
- (void)dbgAssertInside;

@end

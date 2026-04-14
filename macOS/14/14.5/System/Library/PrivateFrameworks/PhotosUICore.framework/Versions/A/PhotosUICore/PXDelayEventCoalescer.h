@interface PXDelayEventCoalescer : PXEventCoalescer

- (id)init;
- (id)initWithDelay:(double)a0;
- (void)_handleTimer;
- (void)inputEvent;

@end

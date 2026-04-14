@interface PXDelayEventCoalescer : PXEventCoalescer

- (id)initWithDelay:(double)a0;
- (id)init;
- (void)inputEvent;
- (void)_handleTimer;

@end

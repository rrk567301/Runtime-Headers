@interface PXRateLimitingEventCoalescer : PXEventCoalescer

- (id)init;
- (void)_handleTimer;
- (id)initWithRate:(double)a0;
- (void)inputEvent;

@end

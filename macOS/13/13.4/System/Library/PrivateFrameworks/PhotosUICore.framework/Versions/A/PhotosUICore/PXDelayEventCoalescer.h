@interface PXDelayEventCoalescer : PXEventCoalescer {
    double _lastEventTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}

@property (readonly, nonatomic) double delay;

- (id)init;
- (void)cancel;
- (id)initWithDelay:(double)a0;
- (void)_handleTimer;
- (void)inputEvent;

@end

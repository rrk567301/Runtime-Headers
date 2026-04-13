@interface PXRateLimitingEventCoalescer : PXEventCoalescer {
    double _lastSignalTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}

@property (readonly, nonatomic) double rate;

- (id)init;
- (void)cancel;
- (void)_handleTimer;
- (void)inputEvent;
- (void)signalObservers;
- (id)initWithRate:(double)a0;

@end

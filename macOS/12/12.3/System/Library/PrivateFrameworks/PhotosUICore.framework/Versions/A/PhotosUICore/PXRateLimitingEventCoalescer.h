@interface PXRateLimitingEventCoalescer : PXEventCoalescer {
    double _lastSignalTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}

@property (readonly, nonatomic) double rate;

- (id)init;
- (void)cancel;
- (id)initWithRate:(double)a0;
- (void)inputEvent;
- (void)signalObservers;
- (void)_handleTimer;

@end

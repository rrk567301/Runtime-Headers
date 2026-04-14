@class NSHashTable;

@interface PXEventCoalescer : NSObject {
    NSHashTable *_observers;
}

@property (readonly, nonatomic) double value;
@property (nonatomic) double lastEventTime;
@property (nonatomic) BOOL waitingForCallback;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) double lastSignalTime;

+ (id)delayedCoalescerWithDelay:(double)a0;
+ (id)rateLimitingCoalescerWithRate:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)cancel;
- (id)initWithValue:(double)a0;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)signalObservers;
- (void)inputEvent;

@end

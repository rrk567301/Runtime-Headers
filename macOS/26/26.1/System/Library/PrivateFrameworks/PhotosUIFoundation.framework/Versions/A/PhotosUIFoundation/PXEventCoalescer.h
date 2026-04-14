@class NSHashTable;

@interface PXEventCoalescer : NSObject {
    NSHashTable *_observers;
}

@property (nonatomic) double lastEventTime;
@property (nonatomic) BOOL waitingForCallback;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) double lastSignalTime;
@property (nonatomic) double interval;
@property (readonly, nonatomic) BOOL hasPendingEvent;

+ (id)delayedCoalescerWithDelay:(double)a0;
+ (id)rateLimitingCoalescerWithRate:(double)a0;

- (void)unregisterObserver:(id)a0;
- (void)cancel;
- (void)registerObserver:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0;
- (id)init;
- (void)_enumerateObserversWithBlock:(id /* block */)a0;
- (void)inputEvent;
- (void)signalObservers;
- (void)signalObserversBeganPendingEvent;

@end

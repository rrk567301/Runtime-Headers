@class NSHashTable;

@interface PXEventCoalescer : NSObject {
    NSHashTable *_observers;
}

@property (nonatomic) double lastEventTime;
@property (nonatomic) char waitingForCallback;
@property (nonatomic) char isCancelled;
@property (nonatomic) double lastSignalTime;
@property (nonatomic) double interval;
@property (readonly, nonatomic) char hasPendingEvent;

+ (id)delayedCoalescerWithDelay:(double)a0;
+ (id)rateLimitingCoalescerWithRate:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)cancel;
- (void)_enumerateObserversWithBlock:(id /* block */)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)initWithInterval:(double)a0;
- (void)inputEvent;
- (void)signalObservers;
- (void)signalObserversBeganPendingEvent;

@end

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

- (void)cancel;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0;
- (void)reset;
- (id)initWithInterval:(double)a0;
- (void)_enumerateObserversWithBlock:(id /* block */)a0;
- (void)inputEvent;
- (void)signalObservers;
- (void)signalObserversBeganPendingEvent;

@end

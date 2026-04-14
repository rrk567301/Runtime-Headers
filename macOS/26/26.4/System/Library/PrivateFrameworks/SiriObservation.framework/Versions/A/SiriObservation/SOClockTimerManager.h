@class AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;

- (void)checkIn;
- (id)addTimer:(id)a0;
- (id)initWithInstanceContext:(id)a0;
- (id)timers;
- (id)updateTimer:(id)a0;
- (id)removeTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (void).cxx_destruct;
- (id)_registeredObservations;
- (id)init;
- (void)removeHandlerForEvent:(long long)a0;
- (void)dealloc;

@end

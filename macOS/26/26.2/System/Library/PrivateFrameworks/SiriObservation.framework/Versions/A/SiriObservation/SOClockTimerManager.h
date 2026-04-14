@class AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;

- (id)initWithInstanceContext:(id)a0;
- (void)checkIn;
- (void)removeHandlerForEvent:(long long)a0;
- (id)timers;
- (id)addTimer:(id)a0;
- (void).cxx_destruct;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (id)_registeredObservations;
- (id)init;
- (id)updateTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)dealloc;
- (id)removeTimer:(id)a0;

@end

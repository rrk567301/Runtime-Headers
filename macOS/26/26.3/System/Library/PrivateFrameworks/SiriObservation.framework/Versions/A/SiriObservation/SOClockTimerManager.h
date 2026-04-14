@class AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;

- (id)initWithInstanceContext:(id)a0;
- (void)checkIn;
- (id)timers;
- (id)init;
- (id)_registeredObservations;
- (id)updateTimer:(id)a0;
- (id)removeTimer:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dismissTimerWithIdentifier:(id)a0;
- (id)addTimer:(id)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (void)removeHandlerForEvent:(long long)a0;

@end

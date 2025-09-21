@class AFInstanceContext, NSMutableDictionary;

@interface SOClockAlarmManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;

- (id)addAlarm:(id)a0;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (id)updateAlarm:(id)a0;
- (void)checkIn;
- (id)removeAlarm:(id)a0;
- (id)alarms;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (id)initWithInstanceContext:(id)a0;
- (id)init;
- (id)_registeredObservations;
- (void)removeHandlerForEvent:(long long)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;
- (void).cxx_destruct;

@end

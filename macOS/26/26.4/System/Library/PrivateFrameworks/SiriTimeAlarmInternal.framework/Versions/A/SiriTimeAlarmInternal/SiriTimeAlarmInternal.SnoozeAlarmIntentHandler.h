@class SnoozeAlarmHalIntent, SnoozeAlarmHalIntentResponse;

@interface SiriTimeAlarmInternal.SnoozeAlarmIntentHandler : NSObject <SnoozeAlarmHalIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmSnoozeAlarmHal:(id)a0 completion:(id /* block */)a1;
- (void)handleSnoozeAlarmHal:(SnoozeAlarmHalIntent *)a0 completion:(void (^)(SnoozeAlarmHalIntentResponse *))a1;

@end

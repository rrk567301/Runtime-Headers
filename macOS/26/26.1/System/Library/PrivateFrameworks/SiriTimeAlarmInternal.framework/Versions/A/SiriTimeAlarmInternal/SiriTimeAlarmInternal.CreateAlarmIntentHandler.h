@interface SiriTimeAlarmInternal.CreateAlarmIntentHandler : NSObject <CreateAlarmIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmCreateAlarm:(id)a0 completion:(id /* block */)a1;
- (void)handleCreateAlarm:(id)a0 completion:(id /* block */)a1;
- (void)resolveTimeForCreateAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end

@class DismissAlarmHalIntent, DismissAlarmHalIntentResponse;

@interface SiriTimeAlarmInternal.DismissAlarmHalIntentHandler : NSObject <DismissAlarmHalIntentHandling> {
    void /* unknown type, empty encoding */ siriAlarmManager;
    void /* unknown type, empty encoding */ osLogObject;
}

- (void).cxx_destruct;
- (id)init;
- (void)confirmDismissAlarmHal:(id)a0 completion:(id /* block */)a1;
- (void)handleDismissAlarmHal:(DismissAlarmHalIntent *)a0 completion:(void (^)(DismissAlarmHalIntentResponse *))a1;

@end

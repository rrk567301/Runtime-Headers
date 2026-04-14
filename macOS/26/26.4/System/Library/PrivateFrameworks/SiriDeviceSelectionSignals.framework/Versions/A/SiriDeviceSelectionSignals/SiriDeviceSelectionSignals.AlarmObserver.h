@interface SiriDeviceSelectionSignals.AlarmObserver : NSObject <SOClockAlarmListening> {
    void /* unknown type, empty encoding */ alarmObserver;
}

- (void)clockAlarmObserver:(id)a0 alarmDidDismiss:(id)a1;
- (void).cxx_destruct;
- (void)clockAlarmObserver:(id)a0 snapshotDidUpdateFrom:(id)a1 to:(id)a2;
- (id)init;
- (void)clockAlarmObserver:(id)a0 alarmDidFire:(id)a1;

@end

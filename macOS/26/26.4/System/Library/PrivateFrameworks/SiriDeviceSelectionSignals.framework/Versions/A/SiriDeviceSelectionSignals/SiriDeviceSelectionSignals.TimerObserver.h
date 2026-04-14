@interface SiriDeviceSelectionSignals.TimerObserver : NSObject <SOClockTimerListening> {
    void /* unknown type, empty encoding */ timerObserver;
}

- (void)clockTimerObserver:(id)a0 timerDidDismiss:(id)a1;
- (void).cxx_destruct;
- (void)clockTimerObserver:(id)a0 snapshotDidUpdateFrom:(id)a1 to:(id)a2;
- (id)init;
- (void)clockTimerObserver:(id)a0 timerDidFire:(id)a1;

@end

@interface NameRecognition.NameTriggerController : NSObject <UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ audioManager;
    void /* unknown type, empty encoding */ nameRecognizer;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ engineState;
    void /* unknown type, empty encoding */ detectedNameCooldownTimer;
    void /* unknown type, empty encoding */ detectedNameCooldownInterval;
    void /* unknown type, empty encoding */ didReceiveDetectedNameEvent;
    void /* unknown type, empty encoding */ lastModifiedUserConfigDate;
    void /* unknown type, empty encoding */ notificationManager;
}

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end

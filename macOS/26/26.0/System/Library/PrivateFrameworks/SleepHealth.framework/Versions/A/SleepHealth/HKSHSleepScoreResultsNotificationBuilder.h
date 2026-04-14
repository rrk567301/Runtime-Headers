@interface HKSHSleepScoreResultsNotificationBuilder : NSObject <HKSHWakeUpResultsNotificationBuilding> {
    void /* unknown type, empty encoding */ builder;
}

- (id)init;
- (void).cxx_destruct;
- (id)buildNotification;
- (BOOL)hasSufficientSleepData;
- (id)initWithDaySummaries:(id)a0 needsIntroduction:(BOOL)a1 userFirstName:(id)a2;

@end

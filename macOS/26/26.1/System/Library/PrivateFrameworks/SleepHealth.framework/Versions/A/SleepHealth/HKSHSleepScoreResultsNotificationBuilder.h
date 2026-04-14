@interface HKSHSleepScoreResultsNotificationBuilder : NSObject <HKSHWakeUpResultsNotificationBuilding> {
    void /* unknown type, empty encoding */ builder;
}

- (void).cxx_destruct;
- (id)init;
- (id)buildNotification;
- (BOOL)hasSufficientSleepData;
- (id)initWithDaySummaries:(id)a0 needsIntroduction:(BOOL)a1 userFirstName:(id)a2 algorithmVersion:(long long)a3;

@end

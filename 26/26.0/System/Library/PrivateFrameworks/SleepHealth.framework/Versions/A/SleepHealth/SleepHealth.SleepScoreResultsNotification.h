@class NSString, NSDictionary;

@interface SleepHealth.SleepScoreResultsNotification : NSObject <HKSHWakeUpResultsNotificationDescribing> {
    void /* unknown type, empty encoding */ localizedDescription;
    void /* unknown type, empty encoding */ isIntroduction;
    void /* unknown type, empty encoding */ targetDayIndex;
    void /* unknown type, empty encoding */ visualizationModel;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (id)init;
- (void).cxx_destruct;

@end

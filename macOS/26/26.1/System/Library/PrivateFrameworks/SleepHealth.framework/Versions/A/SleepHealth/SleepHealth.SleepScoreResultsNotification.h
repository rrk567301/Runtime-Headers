@class NSString, NSDictionary;

@interface SleepHealth.SleepScoreResultsNotification : NSObject <HKSHWakeUpResultsNotificationDescribing> {
    void /* unknown type, empty encoding */ localizedDescription;
    void /* unknown type, empty encoding */ isIntroduction;
    void /* unknown type, empty encoding */ targetDayIndex;
    void /* unknown type, empty encoding */ visualizationModel;
    void /* unknown type, empty encoding */ algorithmVersion;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

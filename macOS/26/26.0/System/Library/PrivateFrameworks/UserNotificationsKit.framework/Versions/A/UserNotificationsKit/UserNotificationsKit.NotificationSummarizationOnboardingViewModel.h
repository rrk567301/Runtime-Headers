@interface UserNotificationsKit.NotificationSummarizationOnboardingViewModel : NSObject <UNNotificationOnboardingViewModel> {
    void /* unknown type, empty encoding */ _showsSummaryOnboarding;
    void /* unknown type, empty encoding */ _showsPriorityOnboarding;
    void /* unknown type, empty encoding */ _priorityOutcome;
    void /* unknown type, empty encoding */ _summaryOutcome;
    void /* unknown type, empty encoding */ _supportsBackButton;
    void /* unknown type, empty encoding */ _selectedCategories;
    void /* unknown type, empty encoding */ sources;
    void /* unknown type, empty encoding */ categorizedSources;
    void /* unknown type, empty encoding */ _iconCache;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) unsigned long long experience;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)saveWithOutcome:(unsigned long long)a0;

@end

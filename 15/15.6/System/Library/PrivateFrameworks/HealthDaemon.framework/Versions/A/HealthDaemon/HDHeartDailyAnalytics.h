@class NSDictionary, NSMutableDictionary;

@interface HDHeartDailyAnalytics : NSObject <NSCopying> {
    NSMutableDictionary *_payload;
}

@property (readonly, copy, nonatomic) NSDictionary *payload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateECGOnboardingCountryCode:(id)a0;
- (void)updateIRNOnboardingCountryCode:(id)a0;
- (void)updateActiveWatchProductType:(id)a0;
- (void)updateActiveWatchSystemBuildVersion:(id)a0;
- (void)updateAgeInYears:(id)a0;
- (void)updateAlgorithmVersionIRN:(id)a0;
- (void)updateAreHealthNotificationsAuthorized:(char)a0;
- (void)updateAtrialFibrillationDetectionV2CountryCode:(id)a0;
- (void)updateCountAnalyzedTachogramsPast24Hours:(long long)a0;
- (void)updateCountMobileAssetsDownloadedPast24Hours:(long long)a0;
- (void)updateCountRecordedTachogramsPast24Hours:(long long)a0;
- (void)updateDaysSinceLastCountryMonitorCheck:(id)a0;
- (void)updateDaysSinceLastCountryMonitorFetch:(id)a0;
- (void)updateECGActiveAlgorithmVersion:(id)a0;
- (void)updateECGUpdateVersionPhone:(id)a0;
- (void)updateECGUpdateVersionWatch:(id)a0;
- (void)updateElectrocardiogramClassificationCount:(long long)a0;
- (void)updateGlucoseEnhancedChartingCountryCode:(id)a0;
- (void)updateHighHeartRateNotificationThreshold:(id)a0;
- (void)updateIrregularRhythmNotificationClassificationCount:(long long)a0;
- (void)updateIsAtrialFibrillationEnabled:(id)a0;
- (void)updateIsAtrialFibrillationEnabledV2:(id)a0;
- (void)updateIsBradycardiaDetectionEnabled:(char)a0;
- (void)updateIsEcgOnboarded:(char)a0;
- (void)updateIsGlucoseEnhancedChartingDelivered:(char)a0;
- (void)updateIsImproveHealthAndActivityAllowed:(char)a0;
- (void)updateIsIrnOnboarded:(char)a0;
- (void)updateIsMenstrualCyclesHeartRateInputDelivered:(char)a0;
- (void)updateIsRespiratoryRateDelivered:(char)a0;
- (void)updateIsRespiratoryRateEnabledInPrivacy:(id)a0;
- (void)updateIsTachycardiaDetectionEnabled:(char)a0;
- (void)updateLastCountryMonitorFetchBuildNumber:(id)a0;
- (void)updateLowHeartRateNotificationThreshold:(id)a0;
- (void)updateMenstrualCyclesHeartRateInputCountryCode:(id)a0;
- (void)updateNumberOfStandAndIdleHoursInPreviousCalendarDay:(id)a0;
- (void)updateOTAFactorPackID:(id)a0;
- (void)updateRespiratoryRateCountryCode:(id)a0;
- (void)updateSex:(long long)a0;
- (void)updateWasWatchWornPast24Hours:(char)a0;
- (void)updateWeeksSinceElectrocardiogramOnboarded:(id)a0;
- (void)updateWithElectrocardiogramClassifications:(id)a0 isWithin24HoursPostIRN:(char)a1;

@end

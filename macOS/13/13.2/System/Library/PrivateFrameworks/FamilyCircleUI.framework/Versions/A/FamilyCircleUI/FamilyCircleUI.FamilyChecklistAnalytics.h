@class _TtC14FamilyCircleUI24FamilyChecklistAnalytics;

@interface FamilyCircleUI.FamilyChecklistAnalytics : NSObject

@property (class, nonatomic, readonly) _TtC14FamilyCircleUI24FamilyChecklistAnalytics *shared;

- (id)init;
- (void).cxx_destruct;
- (void)sendChildSettingsAnalyticsEvent;
- (void)sendCommLimitsAnalyticsEvent;
- (void)sendLocationSharingAnalyticsEvent;
- (void)sendIcloudPlusSharingAnalyticsEvent;
- (void)sendRecoveryContactsAnalyticsEvent;
- (void)sendEmergencyContactsAnalyticsEvent;
- (void)sendChecklistChildSettingsToggleAnalyticsEvent;
- (void)sendChecklistCommLimitsToggleAnalyticsEvent;
- (void)sendChecklistLocationSharingToggleAnalyticsEvent;
- (void)sendChecklistIcloudPlusToggleAnalyticsEvent;
- (void)sendRecoveryContactsToggleAnalyticsEvent;
- (void)sendEmergencyContactsToggleAnalyticsEvent;
- (void)sendTotalChecklistViewsAnalyticsEvent;
- (void)sendEmergencyContactsOnOffToggleEvent;
- (void)sendCommLimitsOnOffToggleEvent;
- (void)sendChildSettingsOnOffToggleEvent;
- (void)sendLocationSharingOnOffToggleEvent;
- (void)sendicloudPlusOnOffToggleEvent;
- (void)sendRecoveryContactsOnOffToggleEvent;

@end

@interface ScreenTimeSettingsUI.STAgePresetsAnalytics : NSObject <ScreenTimeSettingsUI.STAgePresetsAnalyticsProtocol> {
    void /* unknown type, empty encoding */ sessionId;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendPresetsViewedAnalyticsEventWithIsInitialSetup:(BOOL)a0;
- (void)sendSelectedAgeRangeAnalyticsEventWithLowerBound:(long long)a0 upperBound:(long long)a1;
- (void)sendChooseAgeButtonTappedAnalyticsEvent;
- (void)sendResetAgePresetSelectedAnalyticsEvent;
- (void)sendSkippedAnalyticsEvent;
- (void)sendEnabledRestrictionsEventWithSelectionType:(long long)a0 lowerBound:(id)a1 upperBound:(id)a2;

@end

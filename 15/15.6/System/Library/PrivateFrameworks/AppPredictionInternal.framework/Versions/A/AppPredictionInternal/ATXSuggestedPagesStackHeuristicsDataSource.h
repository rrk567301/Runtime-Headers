@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (char)_hasAlarmActivity;
- (char)_hasSignificantHomeAccessoryEvents;
- (char)_hasTVInterest;
- (id)_widgetsForDrivingMode;
- (id)_widgetsForExerciseMode;
- (id)_widgetsForGamingMode;
- (id)_widgetsForMindfulnessMode;
- (id)_widgetsForPersonalMode;
- (id)_widgetsForReadingMode;
- (id)_widgetsForSleepMode;
- (id)_widgetsForWorkMode;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;

@end

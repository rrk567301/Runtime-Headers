@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)_widgetsForPersonalMode;
- (BOOL)_hasTVInterest;
- (id)_widgetsForExerciseMode;
- (id)_widgetsForSleepMode;
- (id)_widgetsForDrivingMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_widgetsForWorkMode;
- (id)_widgetsForReadingMode;
- (id)_widgetsForGamingMode;
- (BOOL)_hasAlarmActivity;
- (id)_widgetsForMindfulnessMode;

@end

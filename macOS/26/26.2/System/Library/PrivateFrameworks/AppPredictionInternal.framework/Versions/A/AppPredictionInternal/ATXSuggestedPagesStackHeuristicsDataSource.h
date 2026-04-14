@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (BOOL)_hasTVInterest;
- (id)_widgetsForMindfulnessMode;
- (id)_widgetsForWorkMode;
- (id)_widgetsForSleepMode;
- (id)_widgetsForGamingMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_widgetsForPersonalMode;
- (id)_widgetsForExerciseMode;
- (id)_widgetsForDrivingMode;
- (BOOL)_hasAlarmActivity;
- (id)_widgetsForReadingMode;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;

@end

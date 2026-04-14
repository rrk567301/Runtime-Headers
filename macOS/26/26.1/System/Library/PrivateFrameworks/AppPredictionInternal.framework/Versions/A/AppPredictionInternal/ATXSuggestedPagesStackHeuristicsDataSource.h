@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (id)_widgetsForWorkMode;
- (id)_widgetsForDrivingMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_widgetsForSleepMode;
- (BOOL)_hasAlarmActivity;
- (id)_widgetsForExerciseMode;
- (id)_widgetsForReadingMode;
- (BOOL)_hasTVInterest;
- (id)_widgetsForMindfulnessMode;
- (id)_widgetsForGamingMode;
- (id)_widgetsForPersonalMode;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;

@end

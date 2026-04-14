@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (id)_widgetsForReadingMode;
- (id)_widgetsForDrivingMode;
- (BOOL)_hasTVInterest;
- (id)_widgetsForMindfulnessMode;
- (id)_widgetsForWorkMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_widgetsForExerciseMode;
- (id)_widgetsForSleepMode;
- (id)_widgetsForPersonalMode;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)_widgetsForGamingMode;
- (BOOL)_hasAlarmActivity;

@end

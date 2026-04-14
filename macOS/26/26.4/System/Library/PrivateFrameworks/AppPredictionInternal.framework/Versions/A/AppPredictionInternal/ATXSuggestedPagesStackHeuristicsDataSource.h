@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>

- (id)_widgetsForWorkMode;
- (id)_widgetsForSleepMode;
- (BOOL)_hasTVInterest;
- (id)_widgetsForPersonalMode;
- (id)_widgetsForGamingMode;
- (id)_widgetsForDrivingMode;
- (id)_widgetsForReadingMode;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;
- (id)_widgetsForExerciseMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (BOOL)_hasAlarmActivity;
- (id)_widgetsForMindfulnessMode;

@end

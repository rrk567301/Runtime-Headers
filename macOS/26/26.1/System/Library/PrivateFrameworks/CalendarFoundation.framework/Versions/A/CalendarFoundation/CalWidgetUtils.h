@interface CalWidgetUtils : NSObject

+ (double)lookaheadIntervalForDaysPerEntry:(long long)a0;
+ (void)refreshEventWidgets;
+ (void)_reloadTimelinesForWidgetKinds:(id)a0 reason:(id)a1;
+ (id)_widgetBundleIdentifier;
+ (void)refreshDateWidgets;
+ (void)_invalidateRelevanceForWidgetKinds:(id)a0;

@end

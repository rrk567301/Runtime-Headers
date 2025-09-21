@interface CalWidgetUtils : NSObject

+ (void)refreshEventWidgets;
+ (void)_invalidateRelevanceForWidgetKinds:(id)a0;
+ (double)lookaheadIntervalForDaysPerEntry:(long long)a0;
+ (void)_reloadTimelinesForWidgetKinds:(id)a0 reason:(id)a1;
+ (void)refreshDateWidgets;
+ (id)_widgetBundleIdentifier;

@end

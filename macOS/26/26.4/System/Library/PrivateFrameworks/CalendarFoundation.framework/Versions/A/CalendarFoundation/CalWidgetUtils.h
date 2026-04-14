@interface CalWidgetUtils : NSObject

+ (void)refreshDateWidgets;
+ (void)_invalidateRelevanceForWidgetKinds:(id)a0;
+ (void)refreshEventWidgets;
+ (void)_reloadTimelinesForWidgetKinds:(id)a0 reason:(id)a1;
+ (double)lookaheadIntervalForDaysPerEntry:(long long)a0;
+ (id)_widgetBundleIdentifier;

@end

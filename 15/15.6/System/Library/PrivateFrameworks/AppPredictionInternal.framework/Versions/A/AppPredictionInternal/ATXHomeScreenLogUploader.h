@class ATXHomeScreenLogWidgetSetupDictionaries, ATXHomeScreenLogWidgetEventDictionaries, ATXHomeScreenLogWidgetAddSheetDictionaries, ATXHomeScreenLogSystemChangeDictionary, ATXHomeScreenLogSystemEventDictionaries, ATXHomeScreenWidgetDiscoverabilityLogHarvester, ATXTVWidgetLogHarvester, ATXHomeScreenLogWidgetRotationDictionaries;

@interface ATXHomeScreenLogUploader : NSObject {
    ATXHomeScreenLogWidgetSetupDictionaries *_widgetSetupDictionaries;
    ATXHomeScreenLogWidgetEventDictionaries *_widgetEventDictionaries;
    ATXHomeScreenLogWidgetRotationDictionaries *_widgetRotationDictionaries;
    ATXHomeScreenLogSystemEventDictionaries *_systemEventDictionary;
    ATXHomeScreenLogSystemChangeDictionary *_systemChangeDictionary;
    ATXHomeScreenLogWidgetAddSheetDictionaries *_widgetAddSheetDictionaries;
    ATXHomeScreenWidgetDiscoverabilityLogHarvester *_widgetDiscoverabilityDictionaries;
    ATXTVWidgetLogHarvester *_tvWidgetLogHarvester;
}

+ (char)_shouldProcessATXUIEvent:(id)a0 startTime:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (void)uploadHomeScreenSummaryLogsToCoreAnalyticsWithActivity:(id)a0 customStartDate:(id)a1 dryRunCompletionHandler:(id /* block */)a2;

@end

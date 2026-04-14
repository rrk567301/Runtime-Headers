@class ATXInformationStore;

@interface _ATXHomeScreenTimelineRelevanceFilter : NSObject {
    ATXInformationStore *_timelineRelevanceStore;
}

- (void)_scheduleBlendingRefreshAtDate:(id)a0 reason:(id)a1;
- (void)scheduleBlendingRefreshAtNextTimelineRelevanceChangeRelatedToSuggestions:(id)a0;
- (id)_nextTimelineRelevanceChangeDateRelatedToSuggestions:(id)a0;
- (id)_nextRefreshDateForSuggestion:(id)a0 familyMask:(unsigned long long)a1;
- (BOOL)_isCurrentTimelineRelevanceScoreZeroForSuggestion:(id)a0 family:(long long)a1 intentIndexingHash:(long long)a2;
- (id)removeSuggestionsByTimelineRelevanceIfNecessary:(id)a0 homeScreenState:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_cancelAnyExistingScheduledRefresh;
- (BOOL)_widgetExistsOnScreen:(id)a0 homeScreenState:(id)a1;
- (id)initWithTimelineRelevanceStore:(id)a0;

@end

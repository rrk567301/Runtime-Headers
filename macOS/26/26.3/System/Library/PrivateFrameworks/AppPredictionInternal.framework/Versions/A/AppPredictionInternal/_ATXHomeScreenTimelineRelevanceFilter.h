@class ATXInformationStore;

@interface _ATXHomeScreenTimelineRelevanceFilter : NSObject {
    ATXInformationStore *_timelineRelevanceStore;
}

- (void)scheduleBlendingRefreshAtNextTimelineRelevanceChangeRelatedToSuggestions:(id)a0;
- (id)initWithTimelineRelevanceStore:(id)a0;
- (id)init;
- (void)_scheduleBlendingRefreshAtDate:(id)a0 reason:(id)a1;
- (void)_cancelAnyExistingScheduledRefresh;
- (id)removeSuggestionsByTimelineRelevanceIfNecessary:(id)a0 homeScreenState:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isCurrentTimelineRelevanceScoreZeroForSuggestion:(id)a0 family:(long long)a1 intentIndexingHash:(long long)a2;
- (id)_nextTimelineRelevanceChangeDateRelatedToSuggestions:(id)a0;
- (BOOL)_widgetExistsOnScreen:(id)a0 homeScreenState:(id)a1;
- (id)_nextRefreshDateForSuggestion:(id)a0 familyMask:(unsigned long long)a1;

@end

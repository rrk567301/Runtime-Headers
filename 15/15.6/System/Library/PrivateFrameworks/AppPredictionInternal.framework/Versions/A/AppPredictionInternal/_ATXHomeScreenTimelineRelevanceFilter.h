@class ATXInformationStore;

@interface _ATXHomeScreenTimelineRelevanceFilter : NSObject {
    ATXInformationStore *_timelineRelevanceStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithTimelineRelevanceStore:(id)a0;
- (void)_cancelAnyExistingScheduledRefresh;
- (char)_isCurrentTimelineRelevanceScoreZeroForSuggestion:(id)a0 family:(long long)a1 intentIndexingHash:(long long)a2;
- (id)_nextRefreshDateForSuggestion:(id)a0 familyMask:(unsigned long long)a1;
- (id)_nextTimelineRelevanceChangeDateRelatedToSuggestions:(id)a0;
- (void)_scheduleBlendingRefreshAtDate:(id)a0 reason:(id)a1;
- (char)_widgetExistsOnScreen:(id)a0 homeScreenState:(id)a1;
- (id)removeSuggestionsByTimelineRelevanceIfNecessary:(id)a0 homeScreenState:(id)a1;
- (void)scheduleBlendingRefreshAtNextTimelineRelevanceChangeRelatedToSuggestions:(id)a0;

@end

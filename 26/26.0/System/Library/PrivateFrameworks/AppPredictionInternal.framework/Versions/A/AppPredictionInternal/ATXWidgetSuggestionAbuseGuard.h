@class ATXInformationStore, ATXTimelineAbuseControlConfig, ATXInformationFilter, NSDate;

@interface ATXWidgetSuggestionAbuseGuard : NSObject {
    ATXTimelineAbuseControlConfig *_config;
    ATXInformationStore *_store;
    ATXInformationFilter *_filter;
    NSDate *_scheduledRefreshDate;
}

+ (id)sharedInstance;

- (BOOL)shouldDemoteSuggestionsForWidget:(id)a0 kind:(id)a1 intent:(id)a2;
- (id)init;
- (void)_scheduleRefreshNoLaterThanDate:(id)a0;
- (id)initWithConfig:(id)a0 store:(id)a1;
- (void).cxx_destruct;
- (void)_invalidatePreviousVerdicts;

@end

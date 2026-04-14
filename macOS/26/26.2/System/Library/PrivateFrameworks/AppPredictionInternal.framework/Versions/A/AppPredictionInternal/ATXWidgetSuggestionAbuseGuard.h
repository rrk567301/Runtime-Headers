@class ATXInformationStore, ATXTimelineAbuseControlConfig, ATXInformationFilter, NSDate;

@interface ATXWidgetSuggestionAbuseGuard : NSObject {
    ATXTimelineAbuseControlConfig *_config;
    ATXInformationStore *_store;
    ATXInformationFilter *_filter;
    NSDate *_scheduledRefreshDate;
}

+ (id)sharedInstance;

- (BOOL)shouldDemoteSuggestionsForWidget:(id)a0 kind:(id)a1 intent:(id)a2;
- (void)_scheduleRefreshNoLaterThanDate:(id)a0;
- (void).cxx_destruct;
- (void)_invalidatePreviousVerdicts;
- (id)initWithConfig:(id)a0 store:(id)a1;
- (id)init;

@end

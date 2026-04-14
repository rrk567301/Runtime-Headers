@class _ATXAppLaunchHistogramManager, ATXAppLaunches;

@interface ATXRSFilter : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    ATXAppLaunches *_appLaunches;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppLaunchHistogramManager:(id)a0;
- (id)filterCandidatesBySuggestionRequirements:(id)a0;
- (id)_candidatesByUsingAppLaunchHistogramsToFilterCandidates:(id)a0;
- (id)initWithAppLaunchHistogramManager:(id)a0 appLaunches:(id)a1;

@end

@class _ATXAppLaunchHistogramManager, ATXAppLaunches;

@interface ATXRSFilter : NSObject {
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    ATXAppLaunches *_appLaunches;
}

- (id)init;
- (id)initWithAppLaunchHistogramManager:(id)a0;
- (id)initWithAppLaunchHistogramManager:(id)a0 appLaunches:(id)a1;
- (id)_candidatesByUsingAppLaunchHistogramsToFilterCandidates:(id)a0;
- (id)filterCandidatesBySuggestionRequirements:(id)a0;
- (void).cxx_destruct;

@end

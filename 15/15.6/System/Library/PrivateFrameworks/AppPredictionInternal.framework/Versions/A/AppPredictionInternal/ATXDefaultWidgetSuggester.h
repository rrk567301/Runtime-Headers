@class _ATXAppLaunchHistogramManager;

@interface ATXDefaultWidgetSuggester : NSObject {
    _ATXAppLaunchHistogramManager *_histogramManager;
}

- (void).cxx_destruct;
- (char)shouldSuggestTV;
- (double)_appLaunchCountForAppBudleId:(id)a0;
- (double)_intentDonationCountForActionKey:(id)a0;
- (double)_upcomingMediaCountForAppBundleId:(id)a0 isInternalApplication:(char)a1;
- (double)appLaunchCountForTVApp;
- (id)initWithHistogramManager:(id)a0;
- (double)intentDonationCountForTVApp;
- (double)upcomingMediaCountForTVApp;

@end

@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (void).cxx_destruct;
- (id)_appLaunchScoreForContactsWidget;
- (id)_appLaunchScoreForSleepWidget;
- (double)_contactsWidgetiCloudFamilyScore;
- (id)_dateOfSleepOnboardingCompletion;
- (char)_isAppPredictionsWidget;
- (char)_isContactsWidget;
- (char)_isSleepWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;
- (char)isWidgetSpecialCase;
- (id)scoreWithCachedAppLaunchData:(id)a0;

@end

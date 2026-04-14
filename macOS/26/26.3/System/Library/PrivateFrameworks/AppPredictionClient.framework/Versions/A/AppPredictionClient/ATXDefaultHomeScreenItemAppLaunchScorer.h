@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (BOOL)isWidgetSpecialCase;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;
- (id)_appLaunchScoreForSleepWidget;
- (BOOL)_isSleepWidget;
- (id)_appLaunchScoreForContactsWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (void).cxx_destruct;
- (double)_contactsWidgetiCloudFamilyScore;
- (BOOL)_isContactsWidget;
- (id)_dateOfSleepOnboardingCompletion;
- (BOOL)_isAppPredictionsWidget;

@end

@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (id)_appLaunchScoreForContactsWidget;
- (double)_contactsWidgetiCloudFamilyScore;
- (BOOL)isWidgetSpecialCase;
- (BOOL)_isSleepWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;
- (BOOL)_isContactsWidget;
- (BOOL)_isAppPredictionsWidget;
- (id)_appLaunchScoreForSleepWidget;
- (id)_dateOfSleepOnboardingCompletion;
- (void).cxx_destruct;

@end

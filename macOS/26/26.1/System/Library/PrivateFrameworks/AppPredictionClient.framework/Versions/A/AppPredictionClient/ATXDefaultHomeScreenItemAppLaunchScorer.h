@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)_dateOfSleepOnboardingCompletion;
- (BOOL)_isAppPredictionsWidget;
- (BOOL)_isSleepWidget;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (double)_contactsWidgetiCloudFamilyScore;
- (BOOL)isWidgetSpecialCase;
- (id)_appLaunchScoreForContactsWidget;
- (id)_appLaunchScoreForSleepWidget;
- (void).cxx_destruct;
- (BOOL)_isContactsWidget;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;

@end

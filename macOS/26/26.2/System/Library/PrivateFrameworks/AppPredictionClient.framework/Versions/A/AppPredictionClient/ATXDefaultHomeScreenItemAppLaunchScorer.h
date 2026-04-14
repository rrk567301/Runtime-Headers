@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (BOOL)_isSleepWidget;
- (id)_appLaunchScoreForContactsWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (double)_contactsWidgetiCloudFamilyScore;
- (void).cxx_destruct;
- (id)_dateOfSleepOnboardingCompletion;
- (BOOL)_isAppPredictionsWidget;
- (BOOL)_isContactsWidget;
- (BOOL)isWidgetSpecialCase;
- (id)_appLaunchScoreForSleepWidget;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;

@end

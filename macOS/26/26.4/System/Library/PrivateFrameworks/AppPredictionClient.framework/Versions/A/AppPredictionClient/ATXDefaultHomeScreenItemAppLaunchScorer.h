@class ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    ATXHomeScreenWidgetDescriptor *_widget;
    id<ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;
}

- (id)_appLaunchScoreForContactsWidget;
- (id)_dateOfSleepOnboardingCompletion;
- (BOOL)_isContactsWidget;
- (BOOL)isWidgetSpecialCase;
- (id)scoreWithCachedAppLaunchData:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isSleepWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)a0;
- (id)_appLaunchScoreForSleepWidget;
- (double)_contactsWidgetiCloudFamilyScore;
- (BOOL)_isAppPredictionsWidget;
- (id)initWithWidget:(id)a0 appLaunchHistogram:(id)a1;

@end

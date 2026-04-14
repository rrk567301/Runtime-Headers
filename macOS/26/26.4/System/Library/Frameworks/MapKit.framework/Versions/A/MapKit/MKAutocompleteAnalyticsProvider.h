@class MKAutocompleteAnalyticsState, NSObject;
@protocol OS_dispatch_queue;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain, nonatomic) MKAutocompleteAnalyticsState *currentState;

- (void).cxx_destruct;
- (id)init;
- (id)captureNewMetrics;
- (void)updateStateWithQuery:(id)a0 queryTokens:(id)a1 visibleSuggestionEntries:(id)a2 responseStatus:(int)a3 modelVersion:(id)a4 rolloutId:(id)a5 rolloutDeploymentId:(id)a6 rolloutFactorpackId:(id)a7 rolloutRampId:(id)a8 experimentId:(id)a9 deploymentId:(id)a10 treatmentId:(id)a11 experimentDescription:(id)a12;

@end

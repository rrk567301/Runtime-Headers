@class ATXInformationStore;

@interface ATXWidgetSuggestionDismissManager : NSObject {
    ATXInformationStore *_store;
}

+ (id)startDateOfDismissHistoryConsidered;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (char)_shouldBlockSuggestionByRelatedDismissDates:(id)a0;
- (char)shouldBlockSuggestionWithIntent:(id)a0;
- (char)shouldBlockWidgetSuggestionBecauseOfPreviousDismiss:(id)a0 kind:(id)a1 intent:(id)a2;
- (void)userDidDismissSuggestionForWidget:(id)a0 kind:(id)a1 intent:(id)a2 atDate:(id)a3 duration:(double)a4;
- (unsigned long long)userDismissCountForWidgetSuggestionWithBundleId:(id)a0;

@end

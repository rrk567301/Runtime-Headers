@class ATXComplicationAppBundleIdsScorer, ATXComplicationSuggestionHeuristics;

@interface ATXComplicationSuggestionScorer : NSObject {
    ATXComplicationAppBundleIdsScorer *_bundleIdsScorer;
    ATXComplicationSuggestionHeuristics *_heuristics;
}

- (id)modelDescription;
- (id)_scoredComplicationsForModularSetGivenDescriptors:(id)a0 appBundleIdScores:(id)a1 heuristicScores:(id)a2 widgetDescriptorsAdditionalData:(id)a3;
- (id)complicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)a0;
- (id)_appBundleIdsForComplicationDescriptors:(id)a0;
- (id)scoredComplicationDescriptorsForModularSetGivenComplicationDescriptors:(id)a0 widgetDescriptorsAdditionalData:(id)a1 aggregatedAppLaunchData:(id)a2 bundleIdToCompanionBundleId:(id)a3 checkEligibility:(BOOL)a4;
- (BOOL)_modularSetIsSuggestibleGivenAppScoreDictionary:(id)a0;
- (id)inputDescriptionForSignal:(id)a0 complicationDescriptors:(id)a1;
- (id)complicationDescriptorsForModularSetGivenComplicationDescriptors:(id)a0 widgetDescriptorsAdditionalData:(id)a1 aggregatedAppLaunchData:(id)a2 bundleIdToCompanionBundleId:(id)a3;
- (id)_scoredComplicationsForInlineSetGivenDescriptors:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isNewlyInstalledWidget:(id)a0 additionalData:(id)a1;
- (id)scoredComplicationDescriptorsForInlineSetGivenComplicationDescriptors:(id)a0;
- (id)init;
- (id)_decaySubsequentScoresFromSameBundleId:(id)a0 decayFactor:(double)a1;

@end

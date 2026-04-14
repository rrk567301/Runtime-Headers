@class ATXComplicationSuggestionScorer, NSString, ATXPosterConfigurationCache, ATXComplicationSuggestionParameters, ATXComplicationSet, ATXComplicationSuggestionCache, ATXWidgetDescriptorCache;

@interface ATXComplicationSuggestionGenerator : NSObject <ATXFaceGalleryLayoutGeneratorComplicationProviding> {
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXComplicationSuggestionCache *_complicationSuggestionCache;
    ATXComplicationSuggestionScorer *_complicationScorer;
    ATXComplicationSuggestionParameters *_parameters;
    ATXPosterConfigurationCache *_posterConfigurationCache;
}

@property (readonly, nonatomic) ATXComplicationSet *inlineSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_modularFallbackSets;
- (id)modelDescription;
- (BOOL)_layoutIsValidGivenComplications:(id)a0 allowedComplicationPersonalities:(id)a1;
- (id)scoredComplicationsDescription;
- (id)landscapeModularSetsWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (id)_getComplicationsOfFamily:(long long)a0 descriptors:(id)a1 alreadyAddedDescriptors:(id)a2 presetComplications:(id)a3 limit:(unsigned long long)a4;
- (id)descriptionForScoredSet:(id)a0;
- (id)_recentInlineComplications;
- (id)_scoredModularComplicationDescriptorsWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (BOOL)_shouldAddComplication:(id)a0 andFilterFromAppsDisabledByAppProtection:(id)a1;
- (id)_presetLandscapeComplicationsFromPortraitSet:(id)a0;
- (id)landscapeModularSetsWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 presetPortraitComplications:(id)a3;
- (id)_modularDescriptors_ShouldRefresh:(BOOL)a0 widgetDescriptorsAdditionalData:(id)a1 aggregatedAppLaunchData:(id)a2 bundleIdToCompanionBundleId:(id)a3;
- (id)_circularComplicationFromComplications:(id)a0;
- (id)init;
- (id)_recentsSet_unusedComplications:(id)a0;
- (void)refreshComplicationCache;
- (id)_inlineSetDescriptors_ShouldRefresh:(BOOL)a0;
- (long long)_layoutTypeForSet:(id)a0;
- (id)_complicationsFromFallbackSet:(id)a0 complicationDescriptors:(id)a1 alreadyAddedDescriptors:(id)a2 andFilterFromAppsDisabledByAppProtection:(id)a3;
- (id)landscapeModularSetsDictsWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2 portraitSets:(id)a3;
- (id)_recentsComplications_unusedComplications:(id)a0;
- (id)_rectangularComplicationFromComplications:(id)a0;
- (id)_setWithDesiredLayout:(long long)a0 complicationDescriptors:(id)a1 unusedRecentsComplications:(id)a2 alreadyAddedComplications:(id)a3;
- (id)inputDescriptionForComplicationSuggestionSignal:(id)a0;
- (id)_scoredInlineComplicationDescriptors;
- (id)_landscapeModularFallbackSets;
- (id)_landscapeModularSetDescriptors_ShouldRefresh:(BOOL)a0 widgetDescriptorsAdditionalData:(id)a1 aggregatedAppLaunchData:(id)a2 bundleIdToCompanionBundleId:(id)a3;
- (id)modularSetsWithDesiredLayouts:(id)a0 unusedRecentComplications:(id)a1 alreadyAddedComplications:(id)a2 widgetDescriptorsAdditionalData:(id)a3 aggregatedAppLaunchData:(id)a4 bundleIdToCompanionBundleId:(id)a5;
- (id)_recentLandscapeComplicationsWithPresetDictionary:(id)a0;
- (id)_modularLayoutTypesGivenRecentsLayoutType:(long long)a0;
- (void).cxx_destruct;
- (id)modularSetsWithWidgetDescriptorsAdditionalData:(id)a0 aggregatedAppLaunchData:(id)a1 bundleIdToCompanionBundleId:(id)a2;
- (BOOL)_complicationIsAlreadyAdded:(id)a0 alreadyAddedComplications:(id)a1;

@end

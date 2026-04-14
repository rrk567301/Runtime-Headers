@class ATXPosterDescriptorCache, NSString, ATXPosterConfigurationCache, _PASSimpleCoalescingTimer, _ATXInternalUninstallNotification, ATXInternalLockedOrHiddenAppNotification, ATXComplicationSuggestionGenerator, ATXFaceSuggestionGenerator, NSXPCListener, ATXInternalUnLockedOrUnHiddenAppNotification;

@interface ATXFaceSuggestionServer : NSObject <NSXPCListenerDelegate, ATXFaceSuggestionGeneratorDelegate, ATXWidgetDescriptorCacheObserver, ATXPosterDescriptorCacheObserver, ATXFaceSuggestionClientXPCInterface> {
    ATXPosterConfigurationCache *_configurationCache;
    ATXPosterDescriptorCache *_descriptorCache;
    ATXComplicationSuggestionGenerator *_complicationsGenerator;
    ATXFaceSuggestionGenerator *_faceSuggestionGenerator;
    _ATXInternalUninstallNotification *_uninstallNotification;
    ATXInternalLockedOrHiddenAppNotification *_lockedOrHiddenAppNotification;
    ATXInternalUnLockedOrUnHiddenAppNotification *_unlockedOrUnhiddenAppNotification;
    _PASSimpleCoalescingTimer *_modeFaceSuggestionRefreshCoalescingTimer;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id /* block */)a0;
- (void)fetchRankedPosterDescriptors:(id /* block */)a0;
- (void)fetchFaceSuggestionsForFocusMode:(id)a0 completion:(id /* block */)a1;
- (id)checkGalleryForPhotosAppProtection:(id)a0;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)a0 completion:(id /* block */)a1;
- (void)logPosterEdit:(id)a0 completion:(id /* block */)a1;
- (void)inputDescriptionForComplicationSuggestionSignal:(id)a0 completion:(id /* block */)a1;
- (void)widgetDescriptorCacheDidUpdateDescriptors:(id)a0;
- (void)fetchPosterConfigurationsWithCompletion:(id /* block */)a0;
- (void)fetchInlineComplicationSetForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)fetchScoredComplicationDescriptionWithCompletion:(id /* block */)a0;
- (void)fetchFaceGalleryConfigurationForSemanticType:(long long)a0 completion:(id /* block */)a1;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)a0;
- (void)logPosterSwitch:(id)a0 completion:(id /* block */)a1;
- (void)descriptorCacheDidUpdateWithDescriptors:(id)a0;
- (void).cxx_destruct;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(id /* block */)a0;
- (void)generatorDidUpdateFaceGalleryConfiguration:(id)a0;
- (void)posterBoardDidUpdateConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)logPosterEditUIViewedWithCompletion:(id /* block */)a0;
- (void)logComplicationsSeenInGalleryWithEngagements:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)reloadLockScreenSuggestionsWithActivity:(id)a0 completion:(id /* block */)a1;
- (void)posterBoardDidUpdateDescriptors:(id)a0 completion:(id /* block */)a1;
- (BOOL)isPhotosBasedSection:(id)a0;
- (id)init;
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(id /* block */)a0;
- (void)fetchComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)reloadLockScreenSuggestionsWithCompletion:(id /* block */)a0;
- (void)fetchMetricsDescriptionWithCompletion:(id /* block */)a0;
- (void)refreshComplicationsCacheWithCompletion:(id /* block */)a0;
- (void)fetchLandscapeComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;

@end

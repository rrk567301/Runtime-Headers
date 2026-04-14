@class ATXFaceGalleryBiomeStream, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ATXFaceSuggestionClient : NSObject <ATXFaceSuggestionClientXPCInterface, ATXFaceSuggestionLogging> {
    NSXPCConnection *_connection;
    ATXFaceGalleryBiomeStream *_stream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

+ (id)sharedInstance;

- (void)logDidTapComplicationSet:(id)a0;
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id /* block */)a0;
- (void)logPosterEditUIViewedWithCompletion:(id /* block */)a0;
- (void)fetchComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)fetchInlineComplicationSetForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)logDidTapComplication:(id)a0;
- (void)logPosterSwitch:(id)a0 completion:(id /* block */)a1;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(id /* block */)a0;
- (void)_logEvent:(id)a0;
- (void)fetchPosterConfigurationsWithCompletion:(id /* block */)a0;
- (void)refreshComplicationsCacheWithCompletion:(id /* block */)a0;
- (void)inputDescriptionForComplicationSuggestionSignal:(id)a0 completion:(id /* block */)a1;
- (void)logFaceGalleryDidDisappear;
- (void)fetchRankedPosterDescriptors:(id /* block */)a0;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)a0;
- (void)logComplicationGalleryDidAppearWithComplicationSets:(id)a0;
- (void)fetchFaceSuggestionsForFocusMode:(id)a0 completion:(id /* block */)a1;
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(id /* block */)a0;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)a0 completion:(id /* block */)a1;
- (void)fetchMetricsDescriptionWithCompletion:(id /* block */)a0;
- (void)logFaceGalleryItemsDidAppear:(id)a0;
- (void)logDidTapFaceGalleryItem:(id)a0;
- (void)fetchFaceGalleryConfigurationForSemanticType:(long long)a0 completion:(id /* block */)a1;
- (void)reloadLockScreenSuggestionsWithCompletion:(id /* block */)a0;
- (void)logDidHideFaceGalleryItem:(id)a0;
- (void)posterBoardDidUpdateDescriptors:(id)a0 completion:(id /* block */)a1;
- (void)logComplicationsSeenInGalleryWithEngagements:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)logPosterEdit:(id)a0 completion:(id /* block */)a1;
- (void)posterBoardDidUpdateConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)fetchScoredComplicationDescriptionWithCompletion:(id /* block */)a0;
- (void)logDidAddComplicationSet:(id)a0;
- (void)fetchLandscapeComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)logComplicationGalleryDidDisappear;
- (id)init;
- (void)logDidAddComplication:(id)a0;

@end

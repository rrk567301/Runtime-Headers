@class NSObject, NSString, CPAnalytics, NSURL, PHPhotoLibrary, PGManager, VCPMediaAnalysisService;
@protocol OS_os_log, OS_dispatch_queue;

@interface PHAWallpaperSuggestionRefreshSession : NSObject {
    NSString *_refreshSessionIdentifier;
    NSURL *_refreshSessionURL;
    VCPMediaAnalysisService *_mediaAnalysisService;
    PGManager *_graphManager;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    NSObject<OS_dispatch_queue> *_workQueue;
    CPAnalytics *_analytics;
}

+ (id)lastGalleryRefreshDate;
+ (void)saveLastGalleryRefreshDate:(id)a0 loggingConnection:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)_cleanup;
- (char)prepareWithError:(id *)a0;
- (id)settlingEffectDescriptorsForDonationWithSuggestionUUIDsToAvoid:(id)a0;
- (char)_prepareWithError:(id *)a0;
- (id)consolidatedShuffleConfigurationFromPosterConfigurations:(id)a0;
- (id)createAndExportMediaForSuggestionLocalIdentifiers:(id)a0 style:(id)a1 toURL:(id)a2 error:(id *)a3;
- (id)currentlyFeaturedSuggestionUUIDsForTop:(char)a0;
- (void)enumerateRefreshableShufflePosterConfigurationsIn:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredPhotoDescriptorsForDonationWithSuggestionUUIDsToAvoid:(id)a0 count:(unsigned long long)a1;
- (id)fetchSuggestionsForGalleryDonationWithSuggestionUUIDsToAvoid:(id)a0;
- (id)initWithGraphManager:(id)a0;
- (id)keyAssetBySuggestionUUIDFromSuggestions:(id)a0;
- (id)posterDescriptorOfType:(long long)a0 withSuggestion:(id)a1 assetBySuggestionUUID:(id)a2;
- (id)randomizeSuggestions:(id)a0;
- (id)randomizedWallpaperSuggesstionWithSubtype:(unsigned short)a0 suggestionUUIDsToAvoid:(id)a1;
- (void)refreshAmbientDescriptorsWithProgressReporter:(id)a0 completion:(id /* block */)a1;
- (void)refreshPosterConfigurationsForNightlyRefresh:(char)a0 progressReporter:(id)a1 passingFilter:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)refreshPosterDescriptorsWithProgressReporter:(id)a0 completion:(id /* block */)a1;
- (char)reloadWallpaperSuggestionsForUUIDs:(id)a0 progress:(id)a1 error:(id *)a2;
- (char)savePreviewSegmentationResourcesForAsset:(id)a0 atURL:(id)a1 withClassification:(unsigned long long)a2 styleCategory:(id)a3 enableSettlingEffect:(char)a4 error:(id *)a5;
- (char)saveSegmentationResourcesForAsset:(id)a0 atURL:(id)a1 withOptions:(id)a2 classification:(unsigned long long)a3 error:(id *)a4;
- (char)saveShuffleSegmentationResourcesForAsset:(id)a0 atURL:(id)a1 withClassification:(unsigned long long)a2 style:(id)a3 error:(id *)a4;
- (void)sendHasSmartShuffleWallpaperBiomeEvent;
- (id)suggestionUUIDsForPosterDescriptors:(id)a0;
- (id)suggestionsForGalleryDonationWithSuggestionUUIDsToAvoid:(id)a0;
- (void)updateSuggestionFeaturedStateWithNewSuggestionUUIDs:(id)a0 oldSuggestionUUIDs:(id)a1;
- (id)updatedPosterDescriptorsFromSuggestions:(id)a0;
- (id)uuidsOfSuggestions:(id)a0;

@end

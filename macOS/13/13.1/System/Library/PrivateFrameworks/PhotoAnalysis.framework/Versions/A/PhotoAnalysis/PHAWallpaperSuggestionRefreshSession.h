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

+ (void)saveLastGalleryRefreshDate:(id)a0 loggingConnection:(id)a1;
+ (id)lastGalleryRefreshDate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)_cleanup;
- (BOOL)prepareWithError:(id *)a0;
- (id)initWithGraphManager:(id)a0;
- (BOOL)_prepareWithError:(id *)a0;
- (void)refreshPosterDescriptorsWithCompletion:(id /* block */)a0;
- (void)refreshPosterConfigurationsForNightlyRefresh:(BOOL)a0 passingFilter:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (id)featuredPhotoDescriptorsForDonationWithSuggestionUUIDsToAvoid:(id)a0;
- (id)suggestionsForGalleryDonationWithSuggestionUUIDsToAvoid:(id)a0;
- (id)fetchSuggestionsForGalleryDonationWithSuggestionUUIDsToAvoid:(id)a0;
- (id)randomizedWallpaperSuggesstionWithSubtype:(unsigned short)a0 suggestionUUIDsToAvoid:(id)a1;
- (id)updatedPosterDescriptorsFromSuggestions:(id)a0;
- (id)posterDescriptorOfType:(long long)a0 withSuggestion:(id)a1 assetBySuggestionUUID:(id)a2;
- (BOOL)savePreviewSegmentationResourcesForAsset:(id)a0 atURL:(id)a1 withClassification:(unsigned long long)a2 error:(id *)a3;
- (BOOL)saveShuffleSegmentationResourcesForAsset:(id)a0 atURL:(id)a1 withClassification:(unsigned long long)a2 style:(id)a3 error:(id *)a4;
- (BOOL)saveSegmentationResourcesForAsset:(id)a0 atURL:(id)a1 withOptions:(id)a2 classification:(unsigned long long)a3 error:(id *)a4;
- (BOOL)reloadWallpaperSuggestionsForUUIDs:(id)a0 progress:(id)a1 error:(id *)a2;
- (void)enumerateSmartAlbumShufflePosterConfigurationsIn:(id)a0 usingBlock:(id /* block */)a1;
- (id)consolidatedShuffleConfigurationFromPosterConfigurations:(id)a0;
- (id)createAndExportMediaForSuggestionLocalIdentifiers:(id)a0 style:(id)a1 toURL:(id)a2 error:(id *)a3;
- (void)updateSuggestionFeaturedStateWithNewSuggestionUUIDs:(id)a0 oldSuggestionUUIDs:(id)a1;
- (id)currentlyFeaturedSuggestionUUIDsForTop:(BOOL)a0;
- (id)uuidsOfSuggestions:(id)a0;
- (id)suggestionUUIDsForPosterDescriptors:(id)a0;

@end

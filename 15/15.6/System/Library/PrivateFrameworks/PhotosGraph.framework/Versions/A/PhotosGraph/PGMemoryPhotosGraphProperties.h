@class PHPhotoLibrary, NSObject, PGNeighborScoreComputer;
@protocol PGEnrichedMemoryProtocol, OS_os_log;

@interface PGMemoryPhotosGraphProperties : NSObject {
    id<PGEnrichedMemoryProtocol> _enrichedMemory;
    PHPhotoLibrary *_photoLibrary;
    PGNeighborScoreComputer *_neighborScoreComputer;
    NSObject<OS_os_log> *_loggingConnection;
    char _isAppleMusicSubscriber;
}

+ (id)_storyRecipeSongCatalogForAppleMusicSubscriber:(char)a0;

- (void).cxx_destruct;
- (id)dictionary;
- (id)infoDictionary;
- (long long)sourceType;
- (id)musicGenreDistribution;
- (id)storyTitleCategory;
- (char)isTriggered;
- (id)personLocalIdentifiers;
- (id)encodedFeatures;
- (id)featureVectorV2;
- (unsigned long long)numberOfMoments;
- (long long)phTitleCategory;
- (id)featureVectorV1;
- (id)_recipeFromEnrichedMemory:(id)a0 subscriberCatalog:(id)a1 applyColorGrading:(char)a2 loggingConnection:(id)a3;
- (id)encodedBlockableFeatures;
- (id)infoForBackingMoments;
- (id)infoForChapterTitles;
- (id)infoForGraphCollection;
- (id)initWithEnrichedMemory:(id)a0 neighborScoreComputer:(id)a1 isAppleMusicSubscriber:(char)a2 photoLibrary:(id)a3 loggingConnection:(id)a4;
- (id)triggerTypesArray;

@end

@class PHPhotoLibrary, NSObject, PGNeighborScoreComputer;
@protocol PGEnrichedMemoryProtocol, OS_os_log;

@interface PGMemoryPhotosGraphProperties : NSObject {
    id<PGEnrichedMemoryProtocol> _enrichedMemory;
    PHPhotoLibrary *_photoLibrary;
    PGNeighborScoreComputer *_neighborScoreComputer;
    NSObject<OS_os_log> *_loggingConnection;
    BOOL _isAppleMusicSubscriber;
}

+ (id)_storyRecipeSongCatalogForAppleMusicSubscriber:(BOOL)a0;

- (void).cxx_destruct;
- (id)dictionary;
- (id)infoDictionary;
- (long long)sourceType;
- (id)musicGenreDistribution;
- (id)personLocalIdentifiers;
- (unsigned long long)numberOfMoments;
- (id)encodedFeatures;
- (id)triggerTypesArray;
- (id)featureVectorV2;
- (id)featureVectorV1;
- (long long)phTitleCategory;
- (id)encodedBlockableFeatures;
- (id)infoForBackingMoments;
- (id)infoForGraphCollection;
- (id)_recipeFromEnrichedMemory:(id)a0 subscriberCatalog:(id)a1 applyColorGrading:(BOOL)a2 loggingConnection:(id)a3;
- (BOOL)isTriggered;
- (id)initWithEnrichedMemory:(id)a0 neighborScoreComputer:(id)a1 isAppleMusicSubscriber:(BOOL)a2 photoLibrary:(id)a3 loggingConnection:(id)a4;

@end

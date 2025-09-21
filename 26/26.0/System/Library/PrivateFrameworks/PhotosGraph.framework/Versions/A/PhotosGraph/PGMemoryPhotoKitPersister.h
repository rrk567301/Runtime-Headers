@class PHPhotoLibrary, PGNeighborScoreComputer, NSObject;
@protocol OS_os_log;

@interface PGMemoryPhotoKitPersister : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    PGNeighborScoreComputer *_neighborScoreComputer;
    BOOL _isAppleMusicSubscriber;
}

+ (void)setStoryColorGradeKindFromPhotosGraphProperties:(id)a0 onMemoryChangeRequest:(id)a1;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)cacheMusicAudioAndArtworkForEnrichedMemories:(id)a0 inflationContext:(id)a1 photoLibrary:(id)a2;
- (id)memoryLocalIdentifiersFromPersistingEnrichedMemories:(id)a0 withPendingState:(unsigned short)a1 graph:(id)a2 progressReporter:(id)a3 error:(id *)a4;
- (id)_encodedFeaturesFromFeatureNodes:(id)a0;
- (BOOL)_enforceUniqueCreationDatesWithPendingState:(unsigned short)a0;
- (id)_memoryCreationRequestForEnrichedMemory:(id)a0 pendingState:(unsigned short)a1 creationDate:(id)a2 photosGraphDataDictionary:(id)a3;
- (unsigned long long)_memoryIndexOffsetOnDate:(id)a0 includePendingMemories:(BOOL)a1;
- (id)_photosGraphDataDictionaryByEnrichedMemoryIdentifierForEnrichedMemories:(id)a0;
- (id)_photosGraphDataDictionaryForEnrichedMemory:(id)a0;
- (BOOL)_shouldPrefetchAudioForMemoriesInPhotoLibrary:(id)a0 withConfiguration:(id)a1;
- (BOOL)_shouldPrefetchMetadataForMemoriesInPhotoLibrary:(id)a0 withConfiguration:(id)a1;
- (BOOL)persistLocalMemoriesFromEnrichedMemories:(id)a0 localMemoriesToDelete:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (BOOL)updateExistingMemories:(id)a0 localMemoryByUniqueIdentifier:(id)a1 progressReporter:(id)a2;

@end

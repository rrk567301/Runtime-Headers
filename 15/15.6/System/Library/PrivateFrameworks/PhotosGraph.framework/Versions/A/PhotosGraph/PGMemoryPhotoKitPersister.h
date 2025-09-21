@class PHPhotoLibrary, PGNeighborScoreComputer, NSObject;
@protocol OS_os_log;

@interface PGMemoryPhotoKitPersister : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    PGNeighborScoreComputer *_neighborScoreComputer;
    char _isAppleMusicSubscriber;
}

+ (void)setStoryColorGradeKindFromPhotosGraphProperties:(id)a0 onMemoryChangeRequest:(id)a1;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)cacheMusicAudioAndArtworkForEnrichedMemories:(id)a0 inflationContext:(id)a1 photoLibrary:(id)a2;
- (id)memoryLocalIdentifiersFromPersistingEnrichedMemories:(id)a0 withPendingState:(unsigned short)a1 graph:(id)a2 progressReporter:(id)a3 error:(id *)a4;
- (id)_encodedFeaturesFromFeatureNodes:(id)a0;
- (char)_enforceUniqueCreationDatesWithPendingState:(unsigned short)a0;
- (id)_memoryCreationRequestForEnrichedMemory:(id)a0 pendingState:(unsigned short)a1 creationDate:(id)a2 photosGraphDataDictionary:(id)a3;
- (unsigned long long)_memoryIndexOffsetOnDate:(id)a0 includePendingMemories:(char)a1;
- (id)_photosGraphDataDictionaryByEnrichedMemoryIdentifierForEnrichedMemories:(id)a0;
- (id)_photosGraphDataDictionaryForEnrichedMemory:(id)a0;
- (char)_shouldPrefetchAudioForMemoriesInPhotoLibrary:(id)a0 withConfiguration:(id)a1;
- (char)_shouldPrefetchMetadataForMemoriesInPhotoLibrary:(id)a0 withConfiguration:(id)a1;
- (char)persistLocalMemoriesFromEnrichedMemories:(id)a0 localMemoriesToDelete:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (char)updateExistingMemories:(id)a0 localMemoryByUniqueIdentifier:(id)a1 progressReporter:(id)a2;

@end

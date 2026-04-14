@class PGMemoryGenerationContext, PGGraphLocationHelper, PGMemoryCurationSession, PGMemoryMomentNodesWithBlockedFeatureCache, NSString, NSObject, PGMemoryController, PGMemoryProcessedScenesAndFacesCache;
@protocol OS_os_log;

@interface PGMemoryGenerator : NSObject <PGMemoryGeneratorProtocol, PGMemoryEnrichmentProtocol>

@property BOOL isDebug;
@property (readonly, weak) PGMemoryController *controller;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly, nonatomic) PGMemoryCurationSession *memoryCurationSession;
@property (readonly, nonatomic) PGMemoryProcessedScenesAndFacesCache *processedScenesAndFacesCache;
@property (readonly, nonatomic) PGMemoryMomentNodesWithBlockedFeatureCache *momentNodesWithBlockedFeatureCache;
@property (readonly, nonatomic) PGGraphLocationHelper *locationHelper;
@property (readonly, nonatomic) PGMemoryGenerationContext *memoryGenerationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (void)_enumeratePotentialMemoriesWithGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)relevantCurationFeederForTriggeredMemory:(id)a0 relevantFeeder:(id)a1 inGraph:(id)a2 allowGuestAsset:(BOOL)a3 progressReporter:(id)a4;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)initWithMemoryGenerationContext:(id)a0;
- (unsigned long long)durationForCuration;
- (unsigned long long)durationForExtendedCuration;
- (BOOL)semanticalDedupingEnabledForExtendedCuration;
- (id)generateAllPotentialMemoriesWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (id)relevantKeyCurationFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)extendedCurationOptionsWithRequiredAssetUUIDs:(id)a0 triggeredMemory:(id)a1;
- (id)uuidsOfRequiredAssetsWithKeyAsset:(id)a0 triggeredMemory:(id)a1 inGraph:(id)a2 progressReporter:(id)a3;
- (id)chapterTitleGeneratorForTriggeredMemory:(id)a0 curatedAssets:(id)a1 extendedCuratedAssets:(id)a2 titleGenerationContext:(id)a3 inGraph:(id)a4;
- (id)initWithMemoryCurationSession:(id)a0 loggingConnection:(id)a1;
- (void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)a0 withGraph:(id)a1 attemptUpgradesBeforeSorting:(BOOL)a2 usingBlock:(id /* block */)a3;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)a0;
- (id)localIdentifiersFromAssets:(id)a0;
- (void)addLocalIdentifiersFromAssets:(id)a0 to:(id)a1;
- (id)defaultTitleGeneratorWithMomentNodes:(id)a0 keyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 category:(unsigned long long)a4 creationDate:(id)a5 titleGenerationContext:(id)a6;
- (BOOL)semanticalDedupingEnabledForCuration;
- (id)baseCurationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1;

@end

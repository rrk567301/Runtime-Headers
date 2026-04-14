@class NSString;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer

@property (retain, nonatomic) NSString *userResponse;
@property (nonatomic) BOOL isBlockingMemoryFeature;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)_personContextDetailFetchOptionsForLibrary:(id)a0;
+ (id)_verifiedPersonsIncludingMergeCandidatesInMemory:(id)a0 personFetchOptions:(id)a1;

- (void).cxx_destruct;
- (void)performBackgroundTask;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)a0;
- (void)applyBlacklistFeatureWithActionType:(id)a0;
- (id)_cpAnalyticsEventForMemoryFeatureType:(unsigned long long)a0;
- (void)confirmBlacklistingUserAction:(id)a0 viewSpec:(id)a1;
- (void)suggestLessPeopleInMemory:(id)a0;
- (id)_memoryFeatureFromMemory:(id)a0 forActionType:(id)a1;

@end

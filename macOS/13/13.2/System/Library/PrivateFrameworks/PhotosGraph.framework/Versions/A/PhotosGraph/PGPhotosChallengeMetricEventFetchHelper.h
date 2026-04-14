@class PGSuggestionSession, NSSet, NSDictionary, PHPhotoLibrary, PGManager;

@interface PGPhotosChallengeMetricEventFetchHelper : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PGManager *_manager;
}

@property (retain, nonatomic) NSDictionary *questionsByQuestionTypeByEntityType;
@property (retain, nonatomic) PGSuggestionSession *featuredPhotosSuggestionSession;
@property (retain, nonatomic) NSDictionary *assetByAssetIdentifier;
@property (retain, nonatomic) NSDictionary *assetByAssetSyndicationIdentifier;
@property (retain, nonatomic) NSDictionary *momentUUIDByAssetIdentifier;
@property (retain, nonatomic) NSDictionary *activePersonUUIDByPersonUUID;
@property (retain, nonatomic) NSDictionary *memoryByMemoryIdentifier;
@property (retain, nonatomic) NSSet *tripKeyAssetIdentifiers;

- (void).cxx_destruct;
- (BOOL)suggestsToStartSharedLibraryWithError:(id *)a0;
- (id)initWithGraphManager:(id)a0;
- (id)initForTestingWithQuestions:(id)a0 assetsByAssetId:(id)a1 momentUUIDByAssetIdentifier:(id)a2 activePersonUUIDByPersonUUID:(id)a3 tripKeyAssetIdentifiers:(id)a4;
- (id)questionsForQuestionMetricType:(unsigned short)a0;
- (id)questionsForQuestionType:(unsigned short)a0 questionEntityTypes:(id)a1;
- (void)_prefetchQuestions;
- (void)_buildQuestionsByQuestionTypeByEntityTypeFromQuestions:(id)a0;
- (void)_prefetchAssetByAssetIdentifier;
- (void)_prefetchAssetByAssetSyndicationIdentifier;
- (void)_prefetchMomentUUIDByAssetIdentifier;
- (void)_prefetchActivePersonUUIDByPersonUUID;
- (void)_prefetchMemoryByMemoryIdentifier;
- (void)_prefetchTripKeyAssetIdentifiers;

@end

@class CLSCurationSession, NSSet, NSDictionary, PHPhotoLibrary, PHUserFeedbackCalculator;

@interface CLSCurationContext : NSObject {
    NSSet *_verifiedPersonUUIDs;
    NSSet *_hiddenOrBlockedPersonUUIDs;
    NSSet *_nonPetFacedPersonLocalIdentifiers;
    NSDictionary *_personUUIDByMergeCandidateUUID;
}

@property (class, readonly, nonatomic) double mergeCandidateConfidenceThreshold;

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator;
@property (readonly, nonatomic) CLSCurationSession *curationSession;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 curationSession:(id)a1;
- (id)initWithUserFeedbackCalculator:(id)a0 curationSession:(id)a1;
- (id)verifiedPersonUUIDs;
- (id)hiddenOrBlockedPersonUUIDs;
- (id)nonPetFacedPersonLocalIdentifiers;
- (id)personUUIDByMergeCandidateUUID;
- (void)_loadPersonAndMergeCandidateUUIDs;
- (void)_loadNonPetFacedPersonLocalIdentifiers;
- (id)_mergeCandidateUUIDsForPerson:(id)a0;

@end

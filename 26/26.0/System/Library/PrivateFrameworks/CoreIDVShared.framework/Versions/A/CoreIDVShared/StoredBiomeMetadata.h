@class NSArray, NSString;

@interface StoredBiomeMetadata : NSManagedObject

@property (nonatomic, retain) NSArray *axSettings;
@property (nonatomic, copy) NSString *deviceLanguage;
@property (nonatomic) BOOL didStepUp;
@property (nonatomic, copy) NSString *dob;
@property (nonatomic, copy) NSString *ethnicity;
@property (nonatomic, copy) NSString *faceMatchingAssessment;
@property (nonatomic, copy) NSString *faceMatchingDetectorModelVersion;
@property (nonatomic, copy) NSString *faceMatchingModelVersion;
@property (nonatomic, copy) NSString *faceMatchingShadowAssessment;
@property (nonatomic, copy) NSString *faceMatchingShadowDetectorModelVersion;
@property (nonatomic, copy) NSString *faceMatchingShadowModelVersion;
@property (nonatomic, copy) NSString *facePoseVersion;
@property (nonatomic, copy) NSString *facVersion;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic) long long gestureAssessment;
@property (nonatomic, copy) NSString *identityType;
@property (nonatomic, copy) NSString *issuer;
@property (nonatomic) long long livenessAssessment;
@property (nonatomic, copy) NSString *livenessShadowFacePoseVersion;
@property (nonatomic, copy) NSString *livenessShadowFacVersion;
@property (nonatomic, copy) NSString *livenessShadowGestureAssessment;
@property (nonatomic, copy) NSString *livenessShadowLabel;
@property (nonatomic, copy) NSString *livenessShadowLivenessAssessment;
@property (nonatomic, copy) NSString *livenessShadowLivenessType;
@property (nonatomic, copy) NSString *livenessShadowPadtoolVersion;
@property (nonatomic, copy) NSString *livenessShadowPrdVersion;
@property (nonatomic, copy) NSString *padtoolVersion;
@property (nonatomic) long long passiveGestureAssessment;
@property (nonatomic) long long passiveLivenessAssessment;
@property (nonatomic, copy) NSString *passiveLivenessFacePoseVersion;
@property (nonatomic, copy) NSString *passiveLivenessFacVersion;
@property (nonatomic, copy) NSString *passiveLivenessPadtoolVersion;
@property (nonatomic, copy) NSString *passiveLivenessPrdVersion;
@property (nonatomic, copy) NSString *prdVersion;
@property (nonatomic, copy) NSString *proofingSessionID;
@property (nonatomic) BOOL shouldDonateProofingDecision;
@property (nonatomic) long long skinTone;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end

@class NSUUID, NSString, NSDictionary, MLMultiArray, NSArray, NSNumber, NSDate;

@interface _PSPredictionContext : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol> {
    _Atomic BOOL _isCancelled;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *searchPrefix;
@property (nonatomic) char isFallbackFetch;
@property (nonatomic) char isCoreMLValidationFetch;
@property (retain, nonatomic) NSDictionary *scoredCoreMLCandidates;
@property (retain, nonatomic) MLMultiArray *coreMLInputFeatureTensor;
@property (retain, nonatomic) NSArray *coreMLModelFeatureOrder;
@property (copy, nonatomic) NSDictionary *coreMLTensorIndexToCandidate;
@property (retain, nonatomic) NSNumber *coreMLNumberOfCandidates;
@property (nonatomic) long long feedBack;
@property (retain, nonatomic) NSString *trialExperimentId;
@property (retain, nonatomic) NSString *trialTreatmentId;
@property (retain, nonatomic) NSString *trialDeploymentId;
@property (retain, nonatomic) NSString *reasonType;
@property (retain, nonatomic) NSString *currentSpanId;
@property (copy, nonatomic) NSDate *queryStartDate;
@property (copy, nonatomic) NSDate *suggestionCompletionDate;
@property (copy, nonatomic) NSString *suggestionPath;
@property (nonatomic) char isPSRActive;
@property (retain, nonatomic) NSArray *supportedBundleIds;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSUUID *locationUUID;
@property (copy, nonatomic) NSArray *locationUUIDs;
@property (nonatomic) long long locationType;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSArray *seedRecipients;
@property (copy, nonatomic) NSArray *candidateShareExtensionBundleIds;
@property (copy, nonatomic) NSDictionary *appBundleIdsToShareExtensionBundleIdsMapping;
@property (retain, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *photoSuggestedPeople;
@property (copy, nonatomic) NSArray *peopleInPhotoIdentifiers;
@property (copy, nonatomic) NSArray *scenesInPhotoIdentifiers;
@property (copy, nonatomic) NSArray *linkMetadataFromClient;
@property (nonatomic) char showPotentialFamilyMembers;
@property (nonatomic) char isSharePlayAvailable;
@property (nonatomic) char isCollaborationAvailable;
@property (nonatomic) char timedOut;
@property long long suggestionPurpose;
@property (copy, nonatomic) NSArray *suggestionsFilteredByBundleIds;
@property (copy, nonatomic) NSArray *seedContactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (char)isCancelled;
- (void)sync:(id)a0;
- (char)supportsZKWSuggestions;
- (unsigned long long)totalHashOfElementsFromArray:(id)a0;

@end

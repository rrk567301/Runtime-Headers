@class NSUUID, NSArray, NSString, MPIdentifierSet, MPModelResponse, MPSectionedCollection, MPCPlaybackRequestEnvironment;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring> {
    NSUUID *_storeIDsAnonymousGroupUUID;
}

@property (nonatomic) char useUniversalAccumulator;
@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths;
@property (copy, nonatomic) NSString *abc_siriAssetInfo;
@property (retain, nonatomic) MPIdentifierSet *abc_preferredShuffleStartIdentifiers;
@property (retain, nonatomic) MPModelResponse *previousResponse;
@property (nonatomic) char shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic) char allowLocalEquivalencies;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) MPSectionedCollection *identifiers;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (nonatomic, getter=isInGroupSession) char inGroupSession;
@property (retain, nonatomic) id requestContextTag;
@property (nonatomic) char disableImplicitSectioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;

+ (char)supportsSecureCoding;
+ (char)requiresNetwork;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end

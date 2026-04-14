@class NSUUID, NSArray, NSString, NSData, MPModelResponse, MPSectionedCollection, MPCPlaybackRequestEnvironment;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPCModelRequestRTCReporting> {
    NSUUID *_storeIDsAnonymousGroupUUID;
}

@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths;
@property (copy, nonatomic) NSString *sodPersonID;
@property (copy, nonatomic) NSData *sodItemPayload;
@property (copy, nonatomic) NSData *sodContainerPayload;
@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths;
@property (copy, nonatomic) NSString *sodPersonID;
@property (copy, nonatomic) NSData *sodItemPayload;
@property (copy, nonatomic) NSData *sodContainerPayload;
@property (retain, nonatomic) MPModelResponse *previousResponse;
@property (nonatomic) BOOL supportsPaginatedResults;
@property (nonatomic) BOOL allowLocalEquivalencies;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) MPSectionedCollection *identifiers;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic, getter=isInGroupSession) BOOL inGroupSession;
@property (retain, nonatomic) id requestContextTag;
@property (nonatomic) BOOL disableImplicitSectioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;
+ (id)MPC_consumeSiriAssetInfo:(id)a0 userIdentity:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)adjustedStartItemIdentifiersForIdentifiers:(id)a0;

@end

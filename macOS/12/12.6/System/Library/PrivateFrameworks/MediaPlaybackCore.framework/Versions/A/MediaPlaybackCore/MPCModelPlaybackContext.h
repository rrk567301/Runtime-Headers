@class ICUserIdentity, NSString, MPIdentifierSet, NSDictionary, MPModelRequest, MPModelGenericObject, MPCPlaybackRequestEnvironment, NSNumber;

@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming, MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable>

@property (readonly, copy, nonatomic) NSString *encodedMediaLibraryUniqueID;
@property (nonatomic) BOOL skipEncodingMediaLibraryUniqueID;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (copy, nonatomic) MPModelRequest *request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers;
@property (copy, nonatomic) NSDictionary *startTimeModifications;
@property (copy, nonatomic) NSDictionary *endTimeModifications;
@property (copy, nonatomic) NSDictionary *assetStoreFronts;
@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (copy, nonatomic) NSNumber *privateListeningOverride;

+ (BOOL)supportsSecureCoding;
+ (Class)queueFeederClass;
+ (BOOL)supportsAutoPlay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSupported;
- (id)descriptionComponents;
- (BOOL)containsRestorableContent;
- (void)clearStartItem;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)a0;
- (void)updateRequestPlaybackEnvironment;

@end

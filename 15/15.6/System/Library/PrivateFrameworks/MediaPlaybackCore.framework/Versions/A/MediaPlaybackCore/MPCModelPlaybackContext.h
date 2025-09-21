@class NSData, NSString, MPIdentifierSet, NSDictionary, MPModelRequest, MPModelGenericObject, MPCPlaybackRequestEnvironment, MSVPair;

@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming>

@property (readonly, copy, nonatomic) NSString *encodedMediaLibraryUniqueID;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic) char skipEncodingMediaLibraryUniqueID;
@property (nonatomic) char allowsJumpToIt;
@property (copy, nonatomic) NSData *delegateTokenB;
@property (copy, nonatomic) MSVPair *overrideStartItemID;
@property (copy, nonatomic) MPModelRequest *request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers;
@property (copy, nonatomic) NSDictionary *startTimeModifications;
@property (copy, nonatomic) NSDictionary *endTimeModifications;
@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (char)supportsAutoPlay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isSupported;
- (void)setUserIdentity:(id)a0;
- (id)userIdentity;
- (void)clearStartItem;
- (char)containsRestorableContent;
- (id)descriptionComponents;
- (char)isReusableForPlaybackContext:(id)a0;
- (Class)queueFeederClass;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)a0;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;
- (void)updateRequestPlaybackEnvironment;

@end

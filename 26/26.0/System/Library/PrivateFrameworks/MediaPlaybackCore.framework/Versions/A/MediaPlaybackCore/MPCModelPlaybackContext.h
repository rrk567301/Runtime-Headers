@class NSData, NSString, MPIdentifierSet, NSDictionary, MPModelRequest, MPModelGenericObject, MPCPlaybackRequestEnvironment, MSVPair;

@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming>

@property (readonly, copy, nonatomic) NSString *encodedMediaLibraryUniqueID;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic) BOOL skipEncodingMediaLibraryUniqueID;
@property (nonatomic) BOOL allowsJumpToIt;
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

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsAutoPlay;

- (id)userIdentity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setUserIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSupported;
- (void)clearStartItem;
- (BOOL)containsRestorableContent;
- (id)descriptionComponents;
- (BOOL)isReusableForPlaybackContext:(id)a0;
- (Class)queueFeederClass;
- (void)setRequest:(id)a0 overrideEnvironment:(BOOL)a1;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)a0;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;
- (void)updateRequestPlaybackEnvironmentAllowingOverride:(BOOL)a0;

@end

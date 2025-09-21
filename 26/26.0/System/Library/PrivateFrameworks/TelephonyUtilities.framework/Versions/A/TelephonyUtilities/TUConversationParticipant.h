@class TUHandle, NSString, TUConversationParticipantAssociation, TUConversationParticipantCluster, TUConversationParticipantCapabilities;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused;
@property (nonatomic, getter=isLightweight) BOOL lightweight;
@property (nonatomic, getter=isNearbySharePlay) BOOL isNearbySharePlay;
@property (nonatomic, getter=isLocalAccountHandle) BOOL localAccountHandle;
@property (nonatomic, getter=isGuestModeEnabled) BOOL guestModeEnabled;
@property (nonatomic) unsigned long long audioVideoMode;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, getter=isSpatialPersonaEnabled) BOOL spatialPersonaEnabled;
@property (nonatomic, getter=isCameraMixedWithScreen) BOOL cameraMixedWithScreen;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (nonatomic) long long captionsToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities;
@property (copy, nonatomic) TUConversationParticipantAssociation *association;
@property (copy, nonatomic) TUConversationParticipantCluster *cluster;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, copy, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *senderCorrelationIdentifier;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToParticipant:(id)a0;
- (id)initWithConversationParticipant:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 handle:(id)a1;
- (id)initWithIdentifier:(unsigned long long)a0 handle:(id)a1 senderCorrelationIdentifier:(id)a2;

@end

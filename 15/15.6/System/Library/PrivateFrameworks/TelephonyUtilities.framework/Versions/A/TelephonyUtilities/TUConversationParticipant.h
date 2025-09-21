@class TUHandle, NSString, TUConversationParticipantAssociation, TUConversationParticipantCapabilities;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isMuted) char muted;
@property (nonatomic, getter=isAudioEnabled) char audioEnabled;
@property (nonatomic, getter=isVideoEnabled) char videoEnabled;
@property (nonatomic, getter=isScreenEnabled) char screenEnabled;
@property (nonatomic, getter=isAudioPaused) char audioPaused;
@property (nonatomic, getter=isLightweight) char lightweight;
@property (nonatomic, getter=isLocalAccountHandle) char localAccountHandle;
@property (nonatomic, getter=isGuestModeEnabled) char guestModeEnabled;
@property (nonatomic) unsigned long long audioVideoMode;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, getter=isSpatialPersonaEnabled) char spatialPersonaEnabled;
@property (nonatomic, getter=isCameraMixedWithScreen) char cameraMixedWithScreen;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (nonatomic) long long captionsToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities;
@property (copy, nonatomic) TUConversationParticipantAssociation *association;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, copy, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *senderCorrelationIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToParticipant:(id)a0;
- (id)initWithConversationParticipant:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 handle:(id)a1;
- (id)initWithIdentifier:(unsigned long long)a0 handle:(id)a1 senderCorrelationIdentifier:(id)a2;

@end

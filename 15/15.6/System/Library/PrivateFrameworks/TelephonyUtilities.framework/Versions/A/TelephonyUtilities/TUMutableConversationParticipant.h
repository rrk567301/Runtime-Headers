@class TUHandle, NSString, TUConversationParticipantAssociation, TUConversationParticipantCapabilities;

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) TUHandle *handle;
@property (nonatomic, getter=isMuted) char muted;
@property (nonatomic, getter=isAudioEnabled) char audioEnabled;
@property (nonatomic, getter=isVideoEnabled) char videoEnabled;
@property (nonatomic, getter=isScreenEnabled) char screenEnabled;
@property (nonatomic) unsigned long long audioVideoMode;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (nonatomic) long long captionsToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities;
@property (nonatomic, getter=isLightweight) char lightweight;
@property (copy, nonatomic) TUConversationParticipantAssociation *association;
@property (nonatomic, getter=isGuestModeEnabled) char guestModeEnabled;
@property (nonatomic, getter=isSpatialPersonaEnabled) char spatialPersonaEnabled;
@property (nonatomic, getter=isCameraMixedWithScreen) char cameraMixedWithScreen;


@end

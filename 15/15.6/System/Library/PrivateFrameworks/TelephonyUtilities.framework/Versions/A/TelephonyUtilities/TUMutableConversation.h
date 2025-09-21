@class TUConversationMember, NSString, NSUUID, NSArray, NSSet, TUConversationReport, TUConversationHandoffEligibility, TUHandle, NSObject, TUConversationLink, TUConversationHandoffContext, TUConversationParticipantAssociation;
@protocol TUFeatureFlags;

@interface TUMutableConversation : TUConversation

@property (nonatomic) unsigned long long avMode;
@property (nonatomic) unsigned long long presentationMode;
@property (retain, nonatomic) TUConversationLink *link;
@property (nonatomic) long long state;
@property (nonatomic) long long letMeInRequestState;
@property (nonatomic) long long avcSessionToken;
@property (nonatomic) long long localCaptionToken;
@property (copy, nonatomic) NSString *avcSessionIdentifier;
@property (nonatomic, getter=isAudioEnabled) char audioEnabled;
@property (nonatomic, getter=isVideoEnabled) char videoEnabled;
@property (nonatomic, getter=isScreenEnabled) char screenEnabled;
@property (nonatomic, getter=isLocallyCreated) char locallyCreated;
@property (nonatomic, getter=hasJoined) char hasJoined;
@property (nonatomic, getter=isVideo) char video;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (nonatomic) unsigned long long localParticipantIdentifier;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) NSSet *pendingMembers;
@property (copy, nonatomic) NSSet *rejectedMembers;
@property (copy, nonatomic) NSSet *lightweightMembers;
@property (retain, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSSet *participantHandles;
@property (copy, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) TUHandle *initiator;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (nonatomic) long long maxVideoDecodesAllowed;
@property (retain, nonatomic) NSObject *reportingHierarchyToken;
@property (retain, nonatomic) NSObject *reportingHierarchySubToken;
@property (copy, nonatomic) TUConversationReport *report;
@property (nonatomic, getter=isOneToOneModeEnabled) char oneToOneModeEnabled;
@property (retain, nonatomic) TUConversationParticipantAssociation *localParticipantAssociation;
@property (nonatomic, getter=isOneToOneHandoffOngoing) char oneToOneHandoffOngoing;
@property (retain, nonatomic) TUConversationHandoffEligibility *handoffEligibility;
@property (nonatomic, getter=isBackedByGroupSession) char backedByGroupSession;
@property (copy, nonatomic) NSSet *activitySessions;
@property (copy, nonatomic) NSSet *systemActivitySessions;
@property (copy, nonatomic) NSSet *virtualParticipants;
@property (copy, nonatomic) NSSet *invitationPreferences;
@property (nonatomic, getter=isScreening) char screening;
@property (nonatomic, getter=isRelaying) char relaying;
@property (retain, nonatomic) id<TUFeatureFlags> featureFlags;
@property (nonatomic, getter=isSpatialPersonaEnabled) char spatialPersonaEnabled;
@property (nonatomic, getter=isCameraMixedWithScreen) char cameraMixedWithScreen;
@property (retain, nonatomic) TUConversationHandoffContext *handoffContext;
@property (copy, nonatomic) NSArray *supportedMediaTypes;


@end

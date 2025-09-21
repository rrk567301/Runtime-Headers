@class NSXPCListenerEndpoint, NSUUID, NSSet, TUConversationActivity, NSDate, NSString, TUHandle;

@interface TUMutableConversationActivitySession : TUConversationActivitySession

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) TUConversationActivity *activity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) char isLocallyInitiated;
@property (nonatomic) char isLightweightPrimaryInitiated;
@property (nonatomic) char isFirstJoin;
@property (nonatomic, getter=isPermittedToJoin) char permittedToJoin;
@property (nonatomic, getter=isLocalParticipantActive) char isLocalParticipantActive;
@property (retain, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) NSString *persistentSceneIdentifier;
@property (nonatomic) unsigned long long distributionCount;
@property (retain, nonatomic) TUHandle *terminatingHandle;
@property (nonatomic, getter=isUsingAirplay) char usingAirplay;
@property (nonatomic) unsigned long long applicationState;


@end

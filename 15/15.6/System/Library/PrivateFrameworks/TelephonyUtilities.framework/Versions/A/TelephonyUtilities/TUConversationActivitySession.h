@class NSUUID, NSDate, NSXPCListenerEndpoint, NSString, NSSet, TUConversationActivity, NSArray, TUHandle, NSNumber;

@interface TUConversationActivitySession : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) TUConversationActivity *activity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) char isLocallyInitiated;
@property (nonatomic, getter=isUsingAirplay) char usingAirplay;
@property (retain, nonatomic) NSDate *localCreationTimestamp;
@property (retain, nonatomic) NSDate *permittedJoinTimestamp;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSNumber *clientAudioSessionID;
@property (nonatomic) char isLightweightPrimaryInitiated;
@property (readonly, nonatomic) char isFirstJoin;
@property (nonatomic, getter=isPermittedToJoin) char permittedToJoin;
@property (readonly, nonatomic, getter=isLocalParticipantActive) char localParticipantActive;
@property (readonly, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) NSString *persistentSceneIdentifier;
@property (retain, nonatomic) NSArray *persistentSceneIdentifiers;
@property (nonatomic) char persistentSceneIsEligibleForAutoClose;
@property (nonatomic) unsigned long long distributionCount;
@property (readonly, nonatomic) unsigned long long applicationState;
@property (retain, nonatomic) TUHandle *terminatingHandle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActivity:(id)a0 locallyInitiated:(char)a1 timestamp:(id)a2 isFirstJoin:(char)a3;
- (id)initWithActivity:(id)a0 state:(unsigned long long)a1 endpoint:(id)a2 locallyInitiated:(char)a3 timestamp:(id)a4 isFirstJoin:(char)a5;
- (id)initWithActivity:(id)a0 state:(unsigned long long)a1 uuid:(id)a2 endpoint:(id)a3 locallyInitiated:(char)a4 timestamp:(id)a5 isFirstJoin:(char)a6 activeRemoteParticipants:(id)a7 isLocalParticipantActive:(char)a8 applicationState:(unsigned long long)a9;
- (id)initWithActivity:(id)a0 uuid:(id)a1 locallyInitiated:(char)a2 timestamp:(id)a3 isFirstJoin:(char)a4;
- (id)initWithTUConversationActivitySession:(id)a0;
- (char)isEqualToConversationActivitySession:(id)a0;
- (void)launchApplicationWithForcedURL:(id)a0 completion:(id /* block */)a1;
- (id)publicCopy;

@end

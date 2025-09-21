@class NSString, GKPlayer, GKTurnBasedParticipantInternal, NSDate;

@interface GKTurnBasedParticipant : NSObject

@property (readonly) GKTurnBasedParticipantInternal *internal;
@property (copy) NSDate *lastTurnDate;
@property (copy) NSDate *timeoutDate;
@property (readonly) NSString *matchStatusString;
@property (readonly) BOOL isWinner;
@property (readonly) GKPlayer *invitedBy;
@property (readonly) NSString *inviteMessage;
@property (readonly) BOOL isLocalPlayer;
@property (readonly) GKTurnBasedParticipantInternal *internal;
@property (copy) NSDate *lastTurnDate;
@property (copy) NSDate *timeoutDate;
@property (readonly) NSString *matchStatusString;
@property (readonly) BOOL isWinner;
@property (readonly) GKPlayer *invitedBy;
@property (readonly) NSString *inviteMessage;
@property (readonly) BOOL isLocalPlayer;
@property (readonly) GKPlayer *player;
@property (readonly) long long status;
@property long long matchOutcome;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (BOOL)matchOutcomeIsValidForDoneState:(long long)a0;
+ (id)stringForMatchOutcome:(long long)a0 totalParticipant:(long long)a1;

- (id)player;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void)setStatus:(long long)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)description;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInternalRepresentation:(id)a0;
- (id)playerID;
- (id)basicMatchOutcomeString:(long long)a0;
- (id)matchOutcomeString:(long long)a0;
- (id)matchOutcomeStringForLocalPlayer:(long long)a0;

@end

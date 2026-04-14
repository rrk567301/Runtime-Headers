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
@property (readonly) GKPlayer *player;
@property (readonly) long long status;
@property long long matchOutcome;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)stringForMatchOutcome:(long long)a0 totalParticipant:(long long)a1;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (BOOL)matchOutcomeIsValidForDoneState:(long long)a0;

- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setStatus:(long long)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (id)player;
- (id)invitedBy;
- (id)playerID;
- (id)basicMatchOutcomeString:(long long)a0;
- (id)matchOutcomeStringForLocalPlayer:(long long)a0;
- (id)matchOutcomeString:(long long)a0;
- (id)lastTurnDate;

@end

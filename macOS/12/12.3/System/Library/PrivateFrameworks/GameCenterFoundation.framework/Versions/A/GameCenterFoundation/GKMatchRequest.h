@class NSArray, NSString, GKTournament, GKMatchRequestInternal;

@interface GKMatchRequest : NSObject <GKReportable>

@property (retain) GKMatchRequestInternal *internal;
@property (retain) GKTournament *tournamentForInvitePool;
@property unsigned long long minPlayers;
@property unsigned long long maxPlayers;
@property unsigned long long playerGroup;
@property unsigned int playerAttributes;
@property (retain) NSArray *recipients;
@property (copy) NSString *inviteMessage;
@property unsigned long long defaultNumberOfPlayers;
@property BOOL restrictToAutomatch;
@property (copy) id /* block */ recipientResponseHandler;
@property (copy) id /* block */ inviteeResponseHandler;
@property (retain) NSArray *playersToInvite;

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)reportableKeyPaths;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setRecipients:(id)a0;
- (id)recipients;
- (id)initWithInternalRepresentation:(id)a0;
- (id)inviteMessage;
- (void)setInviteMessage:(id)a0;
- (id)guestPlayers;
- (BOOL)defaultNumberOfPlayersIsValid;
- (BOOL)isValidWithMax:(unsigned long long)a0;
- (BOOL)isConfiguredForAutomatchOnly;
- (BOOL)isValidForHosted:(BOOL)a0;
- (BOOL)isTurnBasedValid;
- (void)ensureValidityHosted:(BOOL)a0;
- (void)removeLocalPlayerFromPlayersToInvite;
- (BOOL)isRecipientCountValid;
- (id)playersToInvite;
- (void)setPlayersToInvite:(id)a0;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)a0;
- (BOOL)isIncorrectlyInvitingPlayers;

@end

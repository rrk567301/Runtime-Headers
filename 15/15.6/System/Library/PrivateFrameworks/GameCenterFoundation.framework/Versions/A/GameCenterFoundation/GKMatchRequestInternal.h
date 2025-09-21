@class NSString, NSArray, NSDictionary, NSData;

@interface GKMatchRequestInternal : GKInternalRepresentation

@property (nonatomic) unsigned char minPlayers;
@property (nonatomic) unsigned char maxPlayers;
@property (nonatomic) unsigned char defaultNumberOfPlayers;
@property (nonatomic) unsigned long long playerGroup;
@property (nonatomic) unsigned int playerAttributes;
@property (copy, nonatomic) NSString *localPlayerID;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientPlayerIDs;
@property (retain, nonatomic) NSArray *messagesBasedRecipients;
@property (copy, nonatomic) NSString *inviteMessage;
@property (retain, nonatomic) NSDictionary *localizableInviteMessage;
@property (nonatomic) char restrictToAutomatch;
@property (nonatomic) unsigned long long matchType;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *rid;
@property (nonatomic) unsigned int version;
@property (nonatomic, getter=isPreloadedMatch) char preloadedMatch;
@property (retain, nonatomic) NSData *archivedSharePlayInviteeTokensFromProgrammaticInvite;
@property (nonatomic) char isLateJoin;
@property (copy, nonatomic) NSString *queueName;
@property (copy, nonatomic) NSDictionary *properties;
@property (copy, nonatomic) NSDictionary *recipientProperties;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)hasGuestPlayers;

@end

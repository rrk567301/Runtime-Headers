@class NSString, NSData, NSMutableArray;

@interface HDCodableSharingSetupMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSyncCircleIdentifier;
@property (retain, nonatomic) NSString *syncCircleIdentifier;
@property (readonly, nonatomic) char hasOwnerParticipant;
@property (retain, nonatomic) NSData *ownerParticipant;
@property (readonly, nonatomic) char hasSourceProfileIdentifier;
@property (retain, nonatomic) NSData *sourceProfileIdentifier;
@property (readonly, nonatomic) char hasShareParticipant;
@property (retain, nonatomic) NSData *shareParticipant;
@property (readonly, nonatomic) char hasOwnerCloudKitEmailAddress;
@property (retain, nonatomic) NSString *ownerCloudKitEmailAddress;
@property (retain, nonatomic) NSMutableArray *invitationTokens;

+ (Class)invitationTokenType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addInvitationToken:(id)a0;
- (void)clearInvitationTokens;
- (id)invitationTokenAtIndex:(unsigned long long)a0;
- (unsigned long long)invitationTokensCount;

@end

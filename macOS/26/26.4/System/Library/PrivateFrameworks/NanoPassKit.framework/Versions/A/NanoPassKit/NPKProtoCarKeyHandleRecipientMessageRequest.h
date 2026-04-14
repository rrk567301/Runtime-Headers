@class NSData, NSString;

@interface NPKProtoCarKeyHandleRecipientMessageRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasMessageData;
@property (retain, nonatomic) NSData *messageData;
@property (readonly, nonatomic) BOOL hasInvitationIdentifier;
@property (retain, nonatomic) NSString *invitationIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end

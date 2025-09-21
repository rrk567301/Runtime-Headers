@class NSString, NSData;

@interface _BlastDoorASCodableSecureCloudShareItem : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasShareURL;
@property (retain, nonatomic) NSString *shareURL;
@property (readonly, nonatomic) char hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) char hasInvitationToken;
@property (retain, nonatomic) NSData *invitationToken;

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

@end

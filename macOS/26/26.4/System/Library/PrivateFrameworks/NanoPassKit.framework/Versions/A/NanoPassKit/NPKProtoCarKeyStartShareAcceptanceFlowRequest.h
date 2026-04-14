@class NSData, NSString;

@interface NPKProtoCarKeyStartShareAcceptanceFlowRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasInvitationData;
@property (retain, nonatomic) NSData *invitationData;
@property (readonly, nonatomic) BOOL hasTransportationIdentifier;
@property (retain, nonatomic) NSString *transportationIdentifier;

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

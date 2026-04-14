@class NSData;

@interface IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasQuicClientConnectionId;
@property (retain, nonatomic) NSData *quicClientConnectionId;
@property (readonly, nonatomic) BOOL hasQuicServerConnectionId;
@property (retain, nonatomic) NSData *quicServerConnectionId;
@property (nonatomic) unsigned int quicClientLinkId;
@property (nonatomic) unsigned int quicServerLinkId;
@property (nonatomic) BOOL serverGeneratedConnectionIds;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

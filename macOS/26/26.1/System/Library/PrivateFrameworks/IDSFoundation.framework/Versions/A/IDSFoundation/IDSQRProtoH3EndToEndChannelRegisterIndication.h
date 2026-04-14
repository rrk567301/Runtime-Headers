@class NSData, IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo;

@interface IDSQRProtoH3EndToEndChannelRegisterIndication : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *e2eChannelUuid;
@property (retain, nonatomic) IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo *channelInfo;
@property (retain, nonatomic) NSData *virtualQuicClientConnectionId;
@property (nonatomic) unsigned long long txnId;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

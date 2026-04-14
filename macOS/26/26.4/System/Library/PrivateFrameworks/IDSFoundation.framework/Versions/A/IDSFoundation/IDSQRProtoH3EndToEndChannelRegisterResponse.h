@class NSData, IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo;

@interface IDSQRProtoH3EndToEndChannelRegisterResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *virtualQuicServerConnectionId;
@property (retain, nonatomic) IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo *channelInfo;

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

@class NSData;

@interface IDSQRProtoH3EndToEndChannelRegisterAckRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSData *e2eChannelUuid;
@property (nonatomic) BOOL accept;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end

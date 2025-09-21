@class NSData;

@interface IDSQRProtoH3EndToEndChannelUnRegisterIndication : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *e2eChannelUuid;
@property (nonatomic) unsigned long long txnId;

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

@class NSData;

@interface IDSQRProtoQuicConnectionInfo : PBCodable <NSCopying>

@property (nonatomic) int quicConnectionType;
@property (retain, nonatomic) NSData *quicConnectionId;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsQuicConnectionType:(id)a0;
- (id)quicConnectionTypeAsString:(int)a0;

@end

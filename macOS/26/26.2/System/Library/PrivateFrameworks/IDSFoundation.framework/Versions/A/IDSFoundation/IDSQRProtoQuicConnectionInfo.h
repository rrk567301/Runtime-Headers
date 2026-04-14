@class NSData;

@interface IDSQRProtoQuicConnectionInfo : PBCodable <NSCopying>

@property (nonatomic) int quicConnectionType;
@property (retain, nonatomic) NSData *quicConnectionId;

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
- (int)StringAsQuicConnectionType:(id)a0;
- (id)quicConnectionTypeAsString:(int)a0;

@end

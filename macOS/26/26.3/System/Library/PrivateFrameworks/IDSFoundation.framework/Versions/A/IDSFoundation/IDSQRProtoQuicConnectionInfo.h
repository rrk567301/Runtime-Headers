@class NSData;

@interface IDSQRProtoQuicConnectionInfo : PBCodable <NSCopying>

@property (nonatomic) int quicConnectionType;
@property (retain, nonatomic) NSData *quicConnectionId;

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
- (int)StringAsQuicConnectionType:(id)a0;
- (id)quicConnectionTypeAsString:(int)a0;

@end

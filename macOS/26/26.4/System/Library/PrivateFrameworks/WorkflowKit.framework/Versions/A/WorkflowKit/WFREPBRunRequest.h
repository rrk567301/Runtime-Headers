@class NSData;

@interface WFREPBRunRequest : PBRequest <NSCopying>

@property (nonatomic) int payloadType;
@property (retain, nonatomic) NSData *payload;

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
- (int)StringAsPayloadType:(id)a0;
- (id)payloadTypeAsString:(int)a0;

@end

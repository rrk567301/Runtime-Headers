@class NSData;

@interface WFREPBRunRequest : PBRequest <NSCopying>

@property (nonatomic) int payloadType;
@property (retain, nonatomic) NSData *payload;

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
- (int)StringAsPayloadType:(id)a0;
- (id)payloadTypeAsString:(int)a0;

@end

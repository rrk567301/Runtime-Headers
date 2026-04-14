@class NSData;

@interface WFREPBContentItem : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *item;
@property (nonatomic) int encodingType;

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
- (int)StringAsEncodingType:(id)a0;
- (id)encodingTypeAsString:(int)a0;

@end

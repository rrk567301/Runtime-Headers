@class NSData;

@interface ETPKiss : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasDelays;
@property (retain, nonatomic) NSData *delays;
@property (readonly, nonatomic) char hasPoints;
@property (retain, nonatomic) NSData *points;
@property (readonly, nonatomic) char hasAngles;
@property (retain, nonatomic) NSData *angles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

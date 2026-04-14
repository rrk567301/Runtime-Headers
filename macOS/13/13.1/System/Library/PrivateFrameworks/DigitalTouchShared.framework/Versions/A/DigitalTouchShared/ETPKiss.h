@class NSData;

@interface ETPKiss : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDelays;
@property (retain, nonatomic) NSData *delays;
@property (readonly, nonatomic) BOOL hasPoints;
@property (retain, nonatomic) NSData *points;
@property (readonly, nonatomic) BOOL hasAngles;
@property (retain, nonatomic) NSData *angles;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end

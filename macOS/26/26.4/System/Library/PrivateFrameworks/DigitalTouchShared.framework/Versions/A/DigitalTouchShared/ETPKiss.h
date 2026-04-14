@class NSData;

@interface ETPKiss : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDelays;
@property (retain, nonatomic) NSData *delays;
@property (readonly, nonatomic) BOOL hasPoints;
@property (retain, nonatomic) NSData *points;
@property (readonly, nonatomic) BOOL hasAngles;
@property (retain, nonatomic) NSData *angles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end

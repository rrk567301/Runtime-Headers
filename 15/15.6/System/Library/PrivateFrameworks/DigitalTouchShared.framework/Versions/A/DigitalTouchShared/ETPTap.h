@class NSData;

@interface ETPTap : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTimeDeltas;
@property (retain, nonatomic) NSData *timeDeltas;
@property (readonly, nonatomic) char hasPoints;
@property (retain, nonatomic) NSData *points;
@property (readonly, nonatomic) char hasColors;
@property (retain, nonatomic) NSData *colors;

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

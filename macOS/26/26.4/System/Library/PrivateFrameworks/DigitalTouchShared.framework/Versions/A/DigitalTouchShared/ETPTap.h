@class NSData;

@interface ETPTap : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTimeDeltas;
@property (retain, nonatomic) NSData *timeDeltas;
@property (readonly, nonatomic) BOOL hasPoints;
@property (retain, nonatomic) NSData *points;
@property (readonly, nonatomic) BOOL hasColors;
@property (retain, nonatomic) NSData *colors;

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

@class NSData;

@interface ETPTap : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTimeDeltas;
@property (retain, nonatomic) NSData *timeDeltas;
@property (readonly, nonatomic) BOOL hasPoints;
@property (retain, nonatomic) NSData *points;
@property (readonly, nonatomic) BOOL hasColors;
@property (retain, nonatomic) NSData *colors;

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

@interface GEOCoarseLocationRing : PBCodable <NSCopying> {
    struct GEOCoarseLocationPoint { int x0; int x1; } *_points;
    unsigned long long _pointsCount;
    unsigned long long _pointsSpace;
}

@property (readonly, nonatomic) unsigned long long pointsCount;
@property (readonly, nonatomic) struct GEOCoarseLocationPoint { int x0; int x1; } *points;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPoints:(struct GEOCoarseLocationPoint { int x0; int x1; })a0;
- (void)clearPoints;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (struct GEOCoarseLocationPoint { int x0; int x1; })pointsAtIndex:(unsigned long long)a0;
- (void)readAll:(char)a0;
- (void)setPoints:(struct GEOCoarseLocationPoint { int x0; int x1; } *)a0 count:(unsigned long long)a1;

@end

@interface GEOCoarseLocationRing : PBCodable <NSCopying> {
    struct GEOCoarseLocationPoint { int x0; int x1; } *_points;
    unsigned long long _pointsCount;
    unsigned long long _pointsSpace;
}

@property (readonly, nonatomic) unsigned long long pointsCount;
@property (readonly, nonatomic) struct GEOCoarseLocationPoint { int x0; int x1; } *points;

+ (BOOL)isValid:(id)a0;

- (void)clearPoints;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPoints:(struct GEOCoarseLocationPoint { int x0; int x1; })a0;
- (id)initWithJSON:(id)a0;
- (struct GEOCoarseLocationPoint { int x0; int x1; })pointsAtIndex:(unsigned long long)a0;
- (void)setPoints:(struct GEOCoarseLocationPoint { int x0; int x1; } *)a0 count:(unsigned long long)a1;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;

@end

@class NSMutableArray;

@interface GEOCoarseLocationTileData : PBCodable <NSCopying> {
    NSMutableArray *_territorys;
}

@property (retain, nonatomic) NSMutableArray *territorys;

+ (BOOL)isValid:(id)a0;
+ (Class)territoryType;

- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)territoryAtIndex:(unsigned long long)a0;
- (void)clearTerritorys;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)addTerritory:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (unsigned long long)territorysCount;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

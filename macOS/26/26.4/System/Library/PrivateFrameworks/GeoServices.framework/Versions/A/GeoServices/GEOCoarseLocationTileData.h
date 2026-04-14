@class NSMutableArray;

@interface GEOCoarseLocationTileData : PBCodable <NSCopying> {
    NSMutableArray *_territorys;
}

@property (retain, nonatomic) NSMutableArray *territorys;

+ (BOOL)isValid:(id)a0;
+ (Class)territoryType;

- (id)territoryAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)territorysCount;
- (BOOL)isEqual:(id)a0;
- (void)clearTerritorys;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addTerritory:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end

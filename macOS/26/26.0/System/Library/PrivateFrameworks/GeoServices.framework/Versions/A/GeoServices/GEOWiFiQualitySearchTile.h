@interface GEOWiFiQualitySearchTile : PBCodable <NSCopying> {
    unsigned long long _tileKey;
    int _type;
    struct { unsigned char has_tileKey : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasTileKey;
@property (nonatomic) unsigned long long tileKey;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

+ (BOOL)isValid:(id)a0;

- (id)typeAsString:(int)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;

@end

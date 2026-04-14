@class GEOVLFUsageTileID, PBUnknownFields;

@interface GEOVLFTileDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOVLFUsageTileID *_tileId;
    unsigned int _tileSizeBytes;
    struct { unsigned char has_tileSizeBytes : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTileId;
@property (retain, nonatomic) GEOVLFUsageTileID *tileId;
@property (nonatomic) BOOL hasTileSizeBytes;
@property (nonatomic) unsigned int tileSizeBytes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;

@end

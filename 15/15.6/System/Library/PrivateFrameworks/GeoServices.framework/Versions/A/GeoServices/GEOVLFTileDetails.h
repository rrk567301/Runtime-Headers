@class GEOVLFUsageTileID, PBUnknownFields;

@interface GEOVLFTileDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOVLFUsageTileID *_tileId;
    unsigned int _tileSizeBytes;
    struct { unsigned char has_tileSizeBytes : 1; } _flags;
}

@property (readonly, nonatomic) char hasTileId;
@property (retain, nonatomic) GEOVLFUsageTileID *tileId;
@property (nonatomic) char hasTileSizeBytes;
@property (nonatomic) unsigned int tileSizeBytes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

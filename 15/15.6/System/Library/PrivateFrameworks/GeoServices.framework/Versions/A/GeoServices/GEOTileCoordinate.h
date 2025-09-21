@class PBUnknownFields;

@interface GEOTileCoordinate : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _x;
    int _y;
    int _zoom;
    struct { unsigned char has_x : 1; unsigned char has_y : 1; unsigned char has_zoom : 1; } _flags;
}

@property (nonatomic) char hasX;
@property (nonatomic) int x;
@property (nonatomic) char hasY;
@property (nonatomic) int y;
@property (nonatomic) char hasZoom;
@property (nonatomic) int zoom;
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

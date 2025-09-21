@class GEOMapRegion, PBUnknownFields;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_mapRegion;
    int _mapType;
    unsigned int _timeSinceMapViewportChanged;
    struct { unsigned char has_mapType : 1; unsigned char has_timeSinceMapViewportChanged : 1; } _flags;
}

@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) char hasTimeSinceMapViewportChanged;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic) char hasMapType;
@property (nonatomic) int mapType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (id)viewportInfoForTraits:(id)a0;

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
- (int)StringAsMapType:(id)a0;
- (id)initWithTraits:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end

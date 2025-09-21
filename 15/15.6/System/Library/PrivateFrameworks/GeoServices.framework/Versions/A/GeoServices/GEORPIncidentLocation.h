@class GEOLatLng;

@interface GEORPIncidentLocation : PBCodable <NSCopying> {
    GEOLatLng *_latLng;
    unsigned int _zoomLevel;
    struct { unsigned char has_zoomLevel : 1; } _flags;
}

@property (readonly, nonatomic) char hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) char hasZoomLevel;
@property (nonatomic) unsigned int zoomLevel;

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
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

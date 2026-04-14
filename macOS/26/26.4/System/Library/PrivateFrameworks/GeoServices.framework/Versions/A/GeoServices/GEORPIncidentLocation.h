@class GEOLatLng;

@interface GEORPIncidentLocation : PBCodable <NSCopying> {
    GEOLatLng *_latLng;
    unsigned int _zoomLevel;
    struct { unsigned char has_zoomLevel : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) unsigned int zoomLevel;

+ (BOOL)isValid:(id)a0;

- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end

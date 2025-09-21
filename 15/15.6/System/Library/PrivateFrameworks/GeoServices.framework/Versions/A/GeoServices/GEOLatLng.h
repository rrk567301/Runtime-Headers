@class PBUnknownFields;

@interface GEOLatLng : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _elevationM;
    double _lat;
    double _lng;
    char _gtLog;
    struct { unsigned char has_elevationM : 1; unsigned char has_gtLog : 1; } _flags;
}

@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (nonatomic) char hasGtLog;
@property (nonatomic) char gtLog;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) char hasElevationM;
@property (nonatomic) double elevationM;
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
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

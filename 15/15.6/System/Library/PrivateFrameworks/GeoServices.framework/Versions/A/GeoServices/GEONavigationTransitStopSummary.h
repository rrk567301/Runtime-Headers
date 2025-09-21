@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying> {
    GEOLatLng *_coordinate;
    unsigned long long _stopID;
    struct { unsigned char has_stopID : 1; } _flags;
}

@property (nonatomic) char hasStopID;
@property (nonatomic) unsigned long long stopID;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;

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
- (id)initWithTransitStop:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

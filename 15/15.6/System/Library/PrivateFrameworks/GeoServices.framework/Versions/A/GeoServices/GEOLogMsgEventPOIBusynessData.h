@class PBDataReader, GEOLatLng, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventPOIBusynessData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _altitude;
    double _horizontalAccuracy;
    GEOLatLng *_location;
    NSMutableArray *_poiPredictions;
    double _timestamp;
    double _verticalAccuracy;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_altitude : 1; unsigned char has_horizontalAccuracy : 1; unsigned char has_timestamp : 1; unsigned char has_verticalAccuracy : 1; unsigned char read_unknownFields : 1; unsigned char read_location : 1; unsigned char read_poiPredictions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) char hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) char hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) char hasAltitude;
@property (nonatomic) double altitude;
@property (retain, nonatomic) NSMutableArray *poiPredictions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)poiPredictionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPoiPredictions:(id)a0;
- (void)clearPoiPredictions;
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)poiPredictionsAtIndex:(unsigned long long)a0;
- (unsigned long long)poiPredictionsCount;
- (void)readAll:(char)a0;

@end

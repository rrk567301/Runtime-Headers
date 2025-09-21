@class NSDate, NSString, PBDataReader, GEOPBTransitShield, PBUnknownFields, GEOPBTransitArtwork, GEOLatLng, GEOStyleAttributes;
@protocol GEOTransitArtworkDataSource;

@interface GEOPBTransitVehiclePosition : PBCodable <GEOTransitVehiclePosition, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    NSString *_color;
    NSString *_directionName;
    NSString *_headsign;
    GEOLatLng *_latLng;
    GEOPBTransitShield *_modeShield;
    GEOStyleAttributes *_styleAttributes;
    unsigned long long _time;
    unsigned long long _tripId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _bearing;
    float _speed;
    struct { unsigned char has_time : 1; unsigned char has_tripId : 1; unsigned char has_bearing : 1; unsigned char has_speed : 1; unsigned char read_unknownFields : 1; unsigned char read_artwork : 1; unsigned char read_color : 1; unsigned char read_directionName : 1; unsigned char read_headsign : 1; unsigned char read_latLng : 1; unsigned char read_modeShield : 1; unsigned char read_styleAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long tripID;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *direction;
@property (readonly, copy, nonatomic) NSString *headsign;
@property (readonly, copy, nonatomic) NSString *colorHexString;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artworkDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasTripId;
@property (nonatomic) unsigned long long tripId;
@property (readonly, nonatomic) char hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) char hasTime;
@property (nonatomic) unsigned long long time;
@property (nonatomic) char hasBearing;
@property (nonatomic) float bearing;
@property (nonatomic) char hasSpeed;
@property (nonatomic) float speed;
@property (readonly, nonatomic) char hasDirectionName;
@property (retain, nonatomic) NSString *directionName;
@property (readonly, nonatomic) char hasHeadsign;
@property (retain, nonatomic) NSString *headsign;
@property (readonly, nonatomic) char hasModeShield;
@property (retain, nonatomic) GEOPBTransitShield *modeShield;
@property (readonly, nonatomic) char hasColor;
@property (retain, nonatomic) NSString *color;
@property (readonly, nonatomic) char hasStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) char hasArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (id)transitVehiclePositionForPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (void)clearUnknownFields:(char)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

@class GEOLatLngE7, PBDataReader, NSData, NSMutableArray, PBUnknownFields;

@interface GEORecentLocationHistory : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _relativeDistanceToDestinations;
    GEOLatLngE7 *_baseLocation;
    unsigned long long _baseTimestamp;
    NSData *_encodedDistancesToDestination;
    NSData *_encodedLats;
    NSData *_encodedLngs;
    NSMutableArray *_relativeLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _baseDistanceToDestination;
    unsigned int _latlngCount;
    unsigned int _timeResolution;
    struct { unsigned char has_baseTimestamp : 1; unsigned char has_baseDistanceToDestination : 1; unsigned char has_latlngCount : 1; unsigned char has_timeResolution : 1; unsigned char read_unknownFields : 1; unsigned char read_relativeDistanceToDestinations : 1; unsigned char read_baseLocation : 1; unsigned char read_encodedDistancesToDestination : 1; unsigned char read_encodedLats : 1; unsigned char read_encodedLngs : 1; unsigned char read_relativeLocations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasBaseLocation;
@property (retain, nonatomic) GEOLatLngE7 *baseLocation;
@property (nonatomic) char hasBaseTimestamp;
@property (nonatomic) unsigned long long baseTimestamp;
@property (retain, nonatomic) NSMutableArray *relativeLocations;
@property (nonatomic) char hasTimeResolution;
@property (nonatomic) unsigned int timeResolution;
@property (nonatomic) char hasBaseDistanceToDestination;
@property (nonatomic) unsigned int baseDistanceToDestination;
@property (readonly, nonatomic) unsigned long long relativeDistanceToDestinationsCount;
@property (readonly, nonatomic) int *relativeDistanceToDestinations;
@property (nonatomic) char hasLatlngCount;
@property (nonatomic) unsigned int latlngCount;
@property (readonly, nonatomic) char hasEncodedLats;
@property (retain, nonatomic) NSData *encodedLats;
@property (readonly, nonatomic) char hasEncodedLngs;
@property (retain, nonatomic) NSData *encodedLngs;
@property (readonly, nonatomic) char hasEncodedDistancesToDestination;
@property (retain, nonatomic) NSData *encodedDistancesToDestination;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)relativeLocationsType;

- (void)dealloc;
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
- (void)addRelativeDistanceToDestination:(int)a0;
- (void)addRelativeLocations:(id)a0;
- (void)clearRelativeDistanceToDestinations;
- (void)clearRelativeLocations;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (int)relativeDistanceToDestinationAtIndex:(unsigned long long)a0;
- (id)relativeLocationsAtIndex:(unsigned long long)a0;
- (unsigned long long)relativeLocationsCount;
- (void)setRelativeDistanceToDestinations:(int *)a0 count:(unsigned long long)a1;

@end

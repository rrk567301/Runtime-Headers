@class PBUnknownFields, GEOWaypointLocation, GEOWaypointID, GEOWaypointNameProperties, PBDataReader, GEOWaypointPlace, GEOWaypointUUID;

@interface GEOWaypointTyped : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOWaypointUUID *_uniqueWaypointId;
    GEOWaypointID *_waypointId;
    GEOWaypointLocation *_waypointLocation;
    GEOWaypointNameProperties *_waypointNameProperties;
    GEOWaypointPlace *_waypointPlace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _downloadedOfflineRegionState;
    int _waypointLocationSource;
    int _waypointStatus;
    int _waypointType;
    char _isCurrentLocation;
    char _isLocationOfInterest;
    struct { unsigned char has_downloadedOfflineRegionState : 1; unsigned char has_waypointLocationSource : 1; unsigned char has_waypointStatus : 1; unsigned char has_waypointType : 1; unsigned char has_isCurrentLocation : 1; unsigned char has_isLocationOfInterest : 1; unsigned char read_unknownFields : 1; unsigned char read_uniqueWaypointId : 1; unsigned char read_waypointId : 1; unsigned char read_waypointLocation : 1; unsigned char read_waypointNameProperties : 1; unsigned char read_waypointPlace : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasWaypointType;
@property (nonatomic) int waypointType;
@property (readonly, nonatomic) char hasWaypointId;
@property (retain, nonatomic) GEOWaypointID *waypointId;
@property (readonly, nonatomic) char hasWaypointPlace;
@property (retain, nonatomic) GEOWaypointPlace *waypointPlace;
@property (readonly, nonatomic) char hasWaypointLocation;
@property (retain, nonatomic) GEOWaypointLocation *waypointLocation;
@property (nonatomic) char hasIsCurrentLocation;
@property (nonatomic) char isCurrentLocation;
@property (nonatomic) char hasIsLocationOfInterest;
@property (nonatomic) char isLocationOfInterest;
@property (nonatomic) char hasWaypointStatus;
@property (nonatomic) int waypointStatus;
@property (readonly, nonatomic) char hasWaypointNameProperties;
@property (retain, nonatomic) GEOWaypointNameProperties *waypointNameProperties;
@property (readonly, nonatomic) char hasUniqueWaypointId;
@property (retain, nonatomic) GEOWaypointUUID *uniqueWaypointId;
@property (nonatomic) char hasDownloadedOfflineRegionState;
@property (nonatomic) int downloadedOfflineRegionState;
@property (nonatomic) char hasWaypointLocationSource;
@property (nonatomic) int waypointLocationSource;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

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
- (id)loggingDescription;
- (int)StringAsWaypointType:(id)a0;
- (int)StringAsWaypointLocationSource:(id)a0;
- (int)StringAsDownloadedOfflineRegionState:(id)a0;
- (int)StringAsWaypointStatus:(id)a0;
- (id)waypointLocationSourceAsString:(int)a0;
- (void)clearLocations;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)clearUnknownFields:(char)a0;
- (id)downloadedOfflineRegionStateAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)locationForWaypoint;
- (void)readAll:(char)a0;
- (id)waypointStatusAsString:(int)a0;
- (id)waypointTypeAsString:(int)a0;

@end

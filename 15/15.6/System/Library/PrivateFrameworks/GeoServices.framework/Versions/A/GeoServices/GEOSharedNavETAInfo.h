@class PBUnknownFields;

@interface GEOSharedNavETAInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _etaTimestamp;
    double _latitude;
    double _longitude;
    double _remainingDistance;
    double _remainingTime;
    unsigned int _waypointIndex;
    struct { unsigned char has_etaTimestamp : 1; unsigned char has_latitude : 1; unsigned char has_longitude : 1; unsigned char has_remainingDistance : 1; unsigned char has_remainingTime : 1; unsigned char has_waypointIndex : 1; } _flags;
}

@property (nonatomic) char hasRemainingDistance;
@property (nonatomic) double remainingDistance;
@property (nonatomic) char hasRemainingTime;
@property (nonatomic) double remainingTime;
@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasEtaTimestamp;
@property (nonatomic) double etaTimestamp;
@property (nonatomic) char hasWaypointIndex;
@property (nonatomic) unsigned int waypointIndex;
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

@class PBUnknownFields;

@interface GEORoutingSettingsCyclingPrefs : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _autoRecordWorkout;
    char _avoidBusyRoads;
    char _avoidHills;
    char _avoidStairs;
    char _eBike;
    struct { unsigned char has_autoRecordWorkout : 1; unsigned char has_avoidBusyRoads : 1; unsigned char has_avoidHills : 1; unsigned char has_avoidStairs : 1; unsigned char has_eBike : 1; } _flags;
}

@property (nonatomic) char hasAvoidStairs;
@property (nonatomic) char avoidStairs;
@property (nonatomic) char hasAvoidHills;
@property (nonatomic) char avoidHills;
@property (nonatomic) char hasAvoidBusyRoads;
@property (nonatomic) char avoidBusyRoads;
@property (nonatomic) char hasEBike;
@property (nonatomic) char eBike;
@property (nonatomic) char hasAutoRecordWorkout;
@property (nonatomic) char autoRecordWorkout;
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

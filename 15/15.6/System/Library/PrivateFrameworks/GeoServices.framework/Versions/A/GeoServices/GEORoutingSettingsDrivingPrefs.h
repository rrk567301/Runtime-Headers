@class PBUnknownFields;

@interface GEORoutingSettingsDrivingPrefs : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _avoidHighways;
    char _avoidTolls;
    char _speedLimitEnabled;
    char _trafficEnabled;
    char _voiceNavEnabled;
    struct { unsigned char has_avoidHighways : 1; unsigned char has_avoidTolls : 1; unsigned char has_speedLimitEnabled : 1; unsigned char has_trafficEnabled : 1; unsigned char has_voiceNavEnabled : 1; } _flags;
}

@property (nonatomic) char hasAvoidHighways;
@property (nonatomic) char avoidHighways;
@property (nonatomic) char hasAvoidTolls;
@property (nonatomic) char avoidTolls;
@property (nonatomic) char hasSpeedLimitEnabled;
@property (nonatomic) char speedLimitEnabled;
@property (nonatomic) char hasTrafficEnabled;
@property (nonatomic) char trafficEnabled;
@property (nonatomic) char hasVoiceNavEnabled;
@property (nonatomic) char voiceNavEnabled;
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

@class PBUnknownFields;

@interface GEOLogMsgStateMapsUserSettings : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _locationCadence;
    int _locationType;
    char _airQualityShown;
    char _learnFromAppEnabled;
    char _notificationsEnabled;
    char _siriSuggestionsEnabled;
    char _weatherShown;
    struct { unsigned char has_locationCadence : 1; unsigned char has_locationType : 1; unsigned char has_airQualityShown : 1; unsigned char has_learnFromAppEnabled : 1; unsigned char has_notificationsEnabled : 1; unsigned char has_siriSuggestionsEnabled : 1; unsigned char has_weatherShown : 1; } _flags;
}

@property (nonatomic) char hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) char hasLocationCadence;
@property (nonatomic) int locationCadence;
@property (nonatomic) char hasNotificationsEnabled;
@property (nonatomic) char notificationsEnabled;
@property (nonatomic) char hasSiriSuggestionsEnabled;
@property (nonatomic) char siriSuggestionsEnabled;
@property (nonatomic) char hasLearnFromAppEnabled;
@property (nonatomic) char learnFromAppEnabled;
@property (nonatomic) char hasAirQualityShown;
@property (nonatomic) char airQualityShown;
@property (nonatomic) char hasWeatherShown;
@property (nonatomic) char weatherShown;
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
- (int)StringAsLocationCadence:(id)a0;
- (int)StringAsLocationType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)locationCadenceAsString:(int)a0;
- (id)locationTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end

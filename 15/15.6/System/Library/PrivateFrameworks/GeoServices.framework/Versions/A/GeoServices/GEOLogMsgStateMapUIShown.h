@class PBUnknownFields;

@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _activeNavMode;
    char _isAirQualityShown;
    char _isLookAroundEntryIconShown;
    char _isVenueExperienceShown;
    char _isWeatherShown;
    struct { unsigned char has_activeNavMode : 1; unsigned char has_isAirQualityShown : 1; unsigned char has_isLookAroundEntryIconShown : 1; unsigned char has_isVenueExperienceShown : 1; unsigned char has_isWeatherShown : 1; } _flags;
}

@property (nonatomic) char hasIsAirQualityShown;
@property (nonatomic) char isAirQualityShown;
@property (nonatomic) char hasIsWeatherShown;
@property (nonatomic) char isWeatherShown;
@property (nonatomic) char hasIsVenueExperienceShown;
@property (nonatomic) char isVenueExperienceShown;
@property (nonatomic) char hasIsLookAroundEntryIconShown;
@property (nonatomic) char isLookAroundEntryIconShown;
@property (nonatomic) char hasActiveNavMode;
@property (nonatomic) int activeNavMode;
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
- (int)StringAsActiveNavMode:(id)a0;
- (id)activeNavModeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

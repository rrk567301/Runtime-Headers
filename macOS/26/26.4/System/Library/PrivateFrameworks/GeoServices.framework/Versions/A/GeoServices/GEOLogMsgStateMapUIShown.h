@class PBUnknownFields;

@interface GEOLogMsgStateMapUIShown : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _activeNavMode;
    BOOL _isAirQualityShown;
    BOOL _isLookAroundEntryIconShown;
    BOOL _isVenueExperienceShown;
    BOOL _isWeatherShown;
    struct { unsigned char has_activeNavMode : 1; unsigned char has_isAirQualityShown : 1; unsigned char has_isLookAroundEntryIconShown : 1; unsigned char has_isVenueExperienceShown : 1; unsigned char has_isWeatherShown : 1; } _flags;
}

@property (nonatomic) BOOL hasIsAirQualityShown;
@property (nonatomic) BOOL isAirQualityShown;
@property (nonatomic) BOOL hasIsWeatherShown;
@property (nonatomic) BOOL isWeatherShown;
@property (nonatomic) BOOL hasIsVenueExperienceShown;
@property (nonatomic) BOOL isVenueExperienceShown;
@property (nonatomic) BOOL hasIsLookAroundEntryIconShown;
@property (nonatomic) BOOL isLookAroundEntryIconShown;
@property (nonatomic) BOOL hasActiveNavMode;
@property (nonatomic) int activeNavMode;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsActiveNavMode:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)activeNavModeAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end

@class NSString, PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_humanReadable;
    unsigned long long _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    struct { unsigned char has_timeRoundedToHour : 1; unsigned char has_timezoneOffsetFromGmtInHours : 1; } _flags;
}

@property (readonly, nonatomic) char hasHumanReadable;
@property (retain, nonatomic) NSString *humanReadable;
@property (nonatomic) char hasTimeRoundedToHour;
@property (nonatomic) unsigned long long timeRoundedToHour;
@property (nonatomic) char hasTimezoneOffsetFromGmtInHours;
@property (nonatomic) float timezoneOffsetFromGmtInHours;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithCFAbsoluteTime:(double)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end

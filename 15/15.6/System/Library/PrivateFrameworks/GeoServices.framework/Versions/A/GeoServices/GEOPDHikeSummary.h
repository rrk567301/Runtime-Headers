@class GEOFormattedString, PBUnknownFields;

@interface GEOPDHikeSummary : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_hikeTypeName;
    unsigned int _expectedDurationSeconds;
    unsigned int _lengthMeters;
    unsigned int _sumElevationGainCm;
    unsigned int _sumElevationLossCm;
    struct { unsigned char has_expectedDurationSeconds : 1; unsigned char has_lengthMeters : 1; unsigned char has_sumElevationGainCm : 1; unsigned char has_sumElevationLossCm : 1; } _flags;
}

@property (nonatomic) char hasLengthMeters;
@property (nonatomic) unsigned int lengthMeters;
@property (nonatomic) char hasExpectedDurationSeconds;
@property (nonatomic) unsigned int expectedDurationSeconds;
@property (nonatomic) char hasSumElevationGainCm;
@property (nonatomic) unsigned int sumElevationGainCm;
@property (nonatomic) char hasSumElevationLossCm;
@property (nonatomic) unsigned int sumElevationLossCm;
@property (readonly, nonatomic) char hasHikeTypeName;
@property (retain, nonatomic) GEOFormattedString *hikeTypeName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)hikeSummaryWithPlaceData:(id)a0;
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

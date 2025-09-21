@class PBUnknownFields;

@interface GEOPDParsecRankingFeatures : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _distanceFromContainment;
    double _distanceFromDeviceLocation;
    double _expectedCtr;
    char _isRecallMismatch;
    char _isSpellCorrected;
    struct { unsigned char has_distanceFromContainment : 1; unsigned char has_distanceFromDeviceLocation : 1; unsigned char has_expectedCtr : 1; unsigned char has_isRecallMismatch : 1; unsigned char has_isSpellCorrected : 1; } _flags;
}

@property (nonatomic) char hasExpectedCtr;
@property (nonatomic) double expectedCtr;
@property (nonatomic) char hasDistanceFromDeviceLocation;
@property (nonatomic) double distanceFromDeviceLocation;
@property (nonatomic) char hasDistanceFromContainment;
@property (nonatomic) double distanceFromContainment;
@property (nonatomic) char hasIsSpellCorrected;
@property (nonatomic) char isSpellCorrected;
@property (nonatomic) char hasIsRecallMismatch;
@property (nonatomic) char isRecallMismatch;
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

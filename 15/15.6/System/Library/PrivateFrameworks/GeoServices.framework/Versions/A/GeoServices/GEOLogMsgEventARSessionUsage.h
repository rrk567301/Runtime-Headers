@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventARSessionUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_arElementDetails;
    NSMutableArray *_thermalPressures;
    NSMutableArray *_vlfLocalizationResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sessionTimeMs;
    unsigned int _timeRoundedToHour;
    char _didLocalize;
    struct { unsigned char has_sessionTimeMs : 1; unsigned char has_timeRoundedToHour : 1; unsigned char has_didLocalize : 1; unsigned char read_unknownFields : 1; unsigned char read_arElementDetails : 1; unsigned char read_thermalPressures : 1; unsigned char read_vlfLocalizationResults : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *vlfLocalizationResults;
@property (retain, nonatomic) NSMutableArray *arElementDetails;
@property (nonatomic) char hasSessionTimeMs;
@property (nonatomic) unsigned int sessionTimeMs;
@property (nonatomic) char hasDidLocalize;
@property (nonatomic) char didLocalize;
@property (nonatomic) char hasTimeRoundedToHour;
@property (nonatomic) unsigned int timeRoundedToHour;
@property (retain, nonatomic) NSMutableArray *thermalPressures;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)arElementDetailsType;
+ (char)isValid:(id)a0;
+ (Class)thermalPressureType;
+ (Class)vlfLocalizationResultsType;

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
- (void)addArElementDetails:(id)a0;
- (void)addThermalPressure:(id)a0;
- (void)addVlfLocalizationResults:(id)a0;
- (id)arElementDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)arElementDetailsCount;
- (void)clearArElementDetails;
- (void)clearThermalPressures;
- (void)clearUnknownFields:(char)a0;
- (void)clearVlfLocalizationResults;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)thermalPressureAtIndex:(unsigned long long)a0;
- (unsigned long long)thermalPressuresCount;
- (id)vlfLocalizationResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)vlfLocalizationResultsCount;

@end

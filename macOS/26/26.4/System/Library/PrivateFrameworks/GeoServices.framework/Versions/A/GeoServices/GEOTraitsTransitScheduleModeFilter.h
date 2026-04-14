@class GEOTraitsTransitScheduleTimeRange, PBUnknownFields;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOTraitsTransitScheduleTimeRange *_timeRange;
    unsigned int _numAdditionalDepartures;
    struct { unsigned char has_numAdditionalDepartures : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTimeRange;
@property (retain, nonatomic) GEOTraitsTransitScheduleTimeRange *timeRange;
@property (nonatomic) BOOL hasNumAdditionalDepartures;
@property (nonatomic) unsigned int numAdditionalDepartures;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)configureWithDefaultStartTime:(double)a0 duration:(double)a1 numAdditionalDepartures:(unsigned int)a2;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end

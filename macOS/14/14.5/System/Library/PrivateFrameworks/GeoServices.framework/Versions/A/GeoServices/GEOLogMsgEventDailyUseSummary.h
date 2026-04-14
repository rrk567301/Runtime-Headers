@class NSMutableArray;

@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying> {
    double _firstEventDate;
    unsigned long long _firstEventTimeRoundedToHour;
    NSMutableArray *_useEvents;
    int _summaryPeriod;
    struct { unsigned char has_firstEventDate : 1; unsigned char has_firstEventTimeRoundedToHour : 1; unsigned char has_summaryPeriod : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *useEvents;
@property (nonatomic) BOOL hasFirstEventDate;
@property (nonatomic) double firstEventDate;
@property (nonatomic) BOOL hasFirstEventTimeRoundedToHour;
@property (nonatomic) unsigned long long firstEventTimeRoundedToHour;
@property (nonatomic) BOOL hasSummaryPeriod;
@property (nonatomic) int summaryPeriod;

+ (BOOL)isValid:(id)a0;
+ (Class)useEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSummaryPeriod:(id)a0;
- (void)addUseEvents:(id)a0;
- (void)clearUseEvents;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)summaryPeriodAsString:(int)a0;
- (id)useEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)useEventsCount;

@end

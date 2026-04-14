@class NSMutableArray;

@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying> {
    double _firstEventDate;
    unsigned long long _firstEventTimeRoundedToHour;
    NSMutableArray *_useEvents;
    struct { unsigned char has_firstEventDate : 1; unsigned char has_firstEventTimeRoundedToHour : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *useEvents;
@property (nonatomic) BOOL hasFirstEventDate;
@property (nonatomic) double firstEventDate;
@property (nonatomic) BOOL hasFirstEventTimeRoundedToHour;
@property (nonatomic) unsigned long long firstEventTimeRoundedToHour;

+ (BOOL)isValid:(id)a0;
+ (Class)useEventsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUseEvents;
- (void)addUseEvents:(id)a0;
- (unsigned long long)useEventsCount;
- (id)useEventsAtIndex:(unsigned long long)a0;

@end

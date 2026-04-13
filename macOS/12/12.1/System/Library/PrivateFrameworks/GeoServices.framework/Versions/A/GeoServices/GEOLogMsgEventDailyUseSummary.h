@class NSMutableArray;

@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying> {
    double _firstEventDate;
    NSMutableArray *_useEvents;
    struct { unsigned char has_firstEventDate : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *useEvents;
@property (nonatomic) BOOL hasFirstEventDate;
@property (nonatomic) double firstEventDate;

+ (BOOL)isValid:(id)a0;
+ (Class)useEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)addUseEvents:(id)a0;
- (unsigned long long)useEventsCount;
- (void)clearUseEvents;
- (id)useEventsAtIndex:(unsigned long long)a0;

@end

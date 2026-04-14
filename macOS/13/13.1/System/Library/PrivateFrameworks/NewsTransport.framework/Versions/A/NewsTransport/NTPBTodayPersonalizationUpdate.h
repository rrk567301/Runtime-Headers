@class NSMutableArray;

@interface NTPBTodayPersonalizationUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *events;

+ (Class)eventsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;

@end

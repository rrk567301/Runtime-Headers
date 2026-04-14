@class NSMutableArray;

@interface HMXPCEventRouterProtoEventsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *cachedEvents;

+ (Class)eventsType;
+ (Class)cachedEventsType;

- (void)addEvents:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;
- (void)addCachedEvents:(id)a0;
- (id)cachedEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedEventsCount;
- (void)clearCachedEvents;

@end

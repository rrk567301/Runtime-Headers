@class NSMutableArray;

@interface HMXPCEventRouterProtoEventsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *cachedEvents;

+ (Class)eventsType;
+ (Class)cachedEventsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (void)clearCachedEvents;
- (void)addCachedEvents:(id)a0;
- (unsigned long long)cachedEventsCount;
- (id)cachedEventsAtIndex:(unsigned long long)a0;

@end

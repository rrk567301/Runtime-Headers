@class NSMutableArray;

@interface HMDRemoteEventRouterProtoChangeRegistrationsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cachedEvents;

+ (Class)cachedEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCachedEvents:(id)a0;
- (id)cachedEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedEventsCount;
- (void)clearCachedEvents;

@end

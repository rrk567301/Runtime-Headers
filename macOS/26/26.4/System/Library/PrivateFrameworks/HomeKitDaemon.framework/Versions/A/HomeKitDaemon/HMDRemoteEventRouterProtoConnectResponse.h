@class NSMutableArray;

@interface HMDRemoteEventRouterProtoConnectResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cachedEvents;

+ (Class)cachedEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addCachedEvents:(id)a0;
- (id)cachedEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)cachedEventsCount;
- (void)clearCachedEvents;

@end

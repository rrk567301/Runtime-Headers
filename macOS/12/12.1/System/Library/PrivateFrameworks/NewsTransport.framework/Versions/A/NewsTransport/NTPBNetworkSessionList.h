@class NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *networkSessions;
@property (retain, nonatomic) NSMutableArray *networkEvents;

+ (Class)networkSessionsType;
+ (Class)networkEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)networkEventsCount;
- (void)clearNetworkEvents;
- (void)addNetworkEvents:(id)a0;
- (id)networkEventsAtIndex:(unsigned long long)a0;
- (void)addNetworkSessions:(id)a0;
- (void)clearNetworkSessions;
- (unsigned long long)networkSessionsCount;
- (id)networkSessionsAtIndex:(unsigned long long)a0;

@end

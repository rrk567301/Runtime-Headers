@class NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *networkSessions;
@property (retain, nonatomic) NSMutableArray *networkEvents;

+ (Class)networkSessionsType;
+ (Class)networkEventsType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)networkEventsCount;
- (void)clearNetworkEvents;
- (void)addNetworkEvents:(id)a0;
- (id)networkEventsAtIndex:(unsigned long long)a0;
- (void)clearNetworkSessions;
- (void)addNetworkSessions:(id)a0;
- (unsigned long long)networkSessionsCount;
- (id)networkSessionsAtIndex:(unsigned long long)a0;

@end

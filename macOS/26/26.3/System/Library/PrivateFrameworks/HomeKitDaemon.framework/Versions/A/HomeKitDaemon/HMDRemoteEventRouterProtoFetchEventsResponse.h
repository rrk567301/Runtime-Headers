@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *changedEvents;

+ (Class)changedEventsType;

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
- (void)addChangedEvents:(id)a0;
- (id)changedEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)changedEventsCount;
- (void)clearChangedEvents;

@end

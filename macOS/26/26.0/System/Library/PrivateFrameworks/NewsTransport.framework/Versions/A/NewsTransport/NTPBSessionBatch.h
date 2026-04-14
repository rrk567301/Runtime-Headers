@class NTPBSession, NSMutableArray, NSData;

@interface NTPBSessionBatch : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSession;
@property (retain, nonatomic) NTPBSession *session;
@property (retain, nonatomic) NSMutableArray *events;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;

+ (Class)eventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end

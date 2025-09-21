@class NTPBSession, NSMutableArray, NSData;

@interface NTPBSessionBatch : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSession;
@property (retain, nonatomic) NTPBSession *session;
@property (retain, nonatomic) NSMutableArray *events;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSData *identifier;

+ (Class)eventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEvents:(id)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end

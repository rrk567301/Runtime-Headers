@class NSString, NSMutableArray;

@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *shareEvents;

+ (Class)shareEventsType;

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
- (void)clearShareEvents;
- (void)addShareEvents:(id)a0;
- (unsigned long long)shareEventsCount;
- (id)shareEventsAtIndex:(unsigned long long)a0;

@end

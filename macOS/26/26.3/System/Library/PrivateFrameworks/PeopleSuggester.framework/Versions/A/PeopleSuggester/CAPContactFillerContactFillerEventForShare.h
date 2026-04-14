@class NSString, NSMutableArray;

@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *shareEvents;

+ (Class)shareEventsType;

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
- (void)addShareEvents:(id)a0;
- (void)clearShareEvents;
- (id)shareEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)shareEventsCount;

@end

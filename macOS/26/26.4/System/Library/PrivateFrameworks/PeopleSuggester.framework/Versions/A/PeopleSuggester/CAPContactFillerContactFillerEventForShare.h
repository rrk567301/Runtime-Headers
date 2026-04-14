@class NSString, NSMutableArray;

@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *shareEvents;

+ (Class)shareEventsType;

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
- (void)addShareEvents:(id)a0;
- (void)clearShareEvents;
- (id)shareEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)shareEventsCount;

@end

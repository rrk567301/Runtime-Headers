@class NSMutableArray;

@interface ADTriggerContainer : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *clientSideTriggers;

+ (Class)clientSideTriggersType;

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
- (void)addClientSideTriggers:(id)a0;
- (void)clearClientSideTriggers;
- (id)clientSideTriggersAtIndex:(unsigned long long)a0;
- (unsigned long long)clientSideTriggersCount;

@end

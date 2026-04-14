@class NSMutableArray;

@interface ADTriggerContainer : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *clientSideTriggers;

+ (Class)clientSideTriggersType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addClientSideTriggers:(id)a0;
- (void)clearClientSideTriggers;
- (id)clientSideTriggersAtIndex:(unsigned long long)a0;
- (unsigned long long)clientSideTriggersCount;

@end

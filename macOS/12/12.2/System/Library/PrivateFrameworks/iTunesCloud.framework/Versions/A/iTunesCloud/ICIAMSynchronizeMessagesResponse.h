@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *applicationMessageSyncResponses;

+ (Class)applicationMessageSyncResponsesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearApplicationMessageSyncResponses;
- (void)addApplicationMessageSyncResponses:(id)a0;
- (unsigned long long)applicationMessageSyncResponsesCount;
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)a0;

@end

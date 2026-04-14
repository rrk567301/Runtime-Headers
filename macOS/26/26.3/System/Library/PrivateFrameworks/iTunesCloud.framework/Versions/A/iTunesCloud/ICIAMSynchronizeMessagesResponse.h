@class NSMutableArray;

@interface ICIAMSynchronizeMessagesResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *applicationMessageSyncResponses;

+ (Class)applicationMessageSyncResponsesType;

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
- (void)addApplicationMessageSyncResponses:(id)a0;
- (id)applicationMessageSyncResponsesAtIndex:(unsigned long long)a0;
- (unsigned long long)applicationMessageSyncResponsesCount;
- (void)clearApplicationMessageSyncResponses;

@end

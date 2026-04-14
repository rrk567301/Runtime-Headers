@class NSArray, GRPSchemaGroupedMessagesGrouping, NSData, GRPSchemaProducerMetadata;

@interface GRPSchemaGroupedMessagesClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) GRPSchemaGroupedMessagesGrouping *groupedBy;
@property (nonatomic) BOOL hasGroupedBy;
@property (retain, nonatomic) GRPSchemaProducerMetadata *producerMetadata;
@property (nonatomic) BOOL hasProducerMetadata;
@property (copy, nonatomic) NSArray *orderedMessages;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteGroupedBy;
- (void)addOrderedMessages:(id)a0;
- (void)clearOrderedMessages;
- (void)deleteOrderedMessages;
- (void)deleteProducerMetadata;
- (id)orderedMessagesAtIndex:(unsigned long long)a0;
- (unsigned long long)orderedMessagesCount;

@end

@class NSArray, NSData;

@interface GRPSchemaGroupedMessagesServerEvent : SISchemaTopLevelUnionType

@property (copy, nonatomic) NSArray *anyEvents;
@property (copy, nonatomic) NSArray *orderedAnyEvents;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAnyEvents;
- (int)getAnyEventType;
- (void)addAnyEvents:(id)a0;
- (void)addOrderedAnyEvents:(id)a0;
- (id)anyEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)anyEventsCount;
- (void)clearAnyEvents;
- (void)clearOrderedAnyEvents;
- (void)deleteOrderedAnyEvents;
- (id)orderedAnyEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)orderedAnyEventsCount;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end

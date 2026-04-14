@class NSArray, NSData;

@interface GRPSchemaGroupedMessagesServerEvent : SISchemaTopLevelUnionType

@property (copy, nonatomic) NSArray *anyEvents;
@property (copy, nonatomic) NSArray *orderedAnyEvents;
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
- (void)deleteAnyEvents;
- (void)addAnyEvents:(id)a0;
- (void)addOrderedAnyEvents:(id)a0;
- (id)anyEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)anyEventsCount;
- (void)clearAnyEvents;
- (void)clearOrderedAnyEvents;
- (void)deleteOrderedAnyEvents;
- (id)orderedAnyEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)orderedAnyEventsCount;

@end

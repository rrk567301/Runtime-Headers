@class NSArray, NSData;

@interface GRPSchemaGroupedMessagesServerEvent : SISchemaTopLevelUnionType

@property (copy, nonatomic) NSArray *anyEvents;
@property (copy, nonatomic) NSArray *orderedAnyEvents;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)qualifiedMessageName;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
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

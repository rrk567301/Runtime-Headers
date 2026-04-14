@class NSArray, NSData;

@interface GRPSchemaGroupedMessagesServerEvent : SISchemaTopLevelUnionType

@property (copy, nonatomic) NSArray *anyEvents;
@property (copy, nonatomic) NSArray *orderedAnyEvents;
@property (readonly, nonatomic) NSData *jsonData;

- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
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

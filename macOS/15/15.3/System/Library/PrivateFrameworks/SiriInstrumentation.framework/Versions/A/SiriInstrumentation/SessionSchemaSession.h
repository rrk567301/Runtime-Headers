@class SessionSchemaSessionId, NSArray, NSData;

@interface SessionSchemaSession : SISchemaTopLevelUnionType

@property (retain, nonatomic) SessionSchemaSessionId *sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEvent:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)eventCount;
- (id)initWithJSON:(id)a0;
- (id)eventAtIndex:(unsigned long long)a0;
- (void)deleteEvent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteSessionId;
- (void)clearEvent;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end

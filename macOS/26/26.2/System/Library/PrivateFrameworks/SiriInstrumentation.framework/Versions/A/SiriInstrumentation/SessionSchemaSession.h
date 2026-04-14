@class SessionSchemaSessionId, NSArray, NSData;

@interface SessionSchemaSession : SISchemaTopLevelUnionType {
    struct { unsigned char creationTimestampInMsSince1970 : 1; } _has;
}

@property (retain, nonatomic) SessionSchemaSessionId *sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (copy, nonatomic) NSArray *events;
@property (nonatomic) unsigned long long creationTimestampInMsSince1970;
@property (nonatomic) BOOL hasCreationTimestampInMsSince1970;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)isEqual:(id)a0;
- (void)addEvent:(id)a0;
- (unsigned long long)eventCount;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)eventAtIndex:(unsigned long long)a0;
- (void)deleteEvent;
- (void)deleteSessionId;
- (void)clearEvent;
- (void)deleteCreationTimestampInMsSince1970;

@end

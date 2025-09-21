@class NSArray, NSData;

@interface IDENTITYSchemaIDENTITYUsersPresencesCaptured : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *usersPresences;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addUsersPresences:(id)a0;
- (void)clearUsersPresences;
- (void)deleteUsersPresences;
- (id)usersPresencesAtIndex:(unsigned long long)a0;
- (unsigned long long)usersPresencesCount;

@end

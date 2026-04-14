@class NSData;

@interface SISchemaConversationTrace : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *previousTurnID;
@property (nonatomic) BOOL hasPreviousTurnID;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePreviousTurnID;

@end

@class NSData, SISchemaUUID;

@interface ACTVSchemaACTVTurnActivated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *turnId;
@property (nonatomic) char hasTurnId;
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
- (void)deleteTurnId;
- (id)suppressMessageUnderConditions;

@end

@class NSData, SISchemaUUID;

@interface NLXSchemaNLXCurareContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *curareId;
@property (nonatomic) char hasCurareId;
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
- (void)deleteCurareId;
- (id)suppressMessageUnderConditions;

@end

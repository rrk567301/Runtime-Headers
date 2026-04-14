@class NSString, NSData, SISchemaUUID;

@interface SISchemaFreeFormText : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) SISchemaUUID *explainabilityIdentifier;
@property (nonatomic) BOOL hasExplainabilityIdentifier;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteText;
- (void)deleteExplainabilityIdentifier;

@end

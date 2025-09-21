@class NSString, NSData, SISchemaUUID;

@interface PGSchemaPGPromptTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) char hasPrompt;
@property (copy, nonatomic) NSString *grammar;
@property (nonatomic) char hasGrammar;
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
- (void)deleteGrammar;
- (void)deleteLinkId;
- (void)deletePrompt;
- (id)suppressMessageUnderConditions;

@end

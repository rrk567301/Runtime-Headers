@class NSString, NSData, SISchemaUUID;

@interface PGSchemaPGPromptTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) BOOL hasPrompt;
@property (copy, nonatomic) NSString *grammar;
@property (nonatomic) BOOL hasGrammar;
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
- (void)deleteGrammar;
- (void)deleteLinkId;
- (void)deletePrompt;

@end

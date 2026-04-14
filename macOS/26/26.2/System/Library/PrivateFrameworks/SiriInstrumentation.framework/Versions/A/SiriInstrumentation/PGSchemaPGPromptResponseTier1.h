@class NSString, NSData, SISchemaUUID;

@interface PGSchemaPGPromptResponseTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *promptResponse;
@property (nonatomic) BOOL hasPromptResponse;
@property (copy, nonatomic) NSString *grammar;
@property (nonatomic) BOOL hasGrammar;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteGrammar;
- (void)deleteLinkId;
- (void)deletePromptResponse;

@end

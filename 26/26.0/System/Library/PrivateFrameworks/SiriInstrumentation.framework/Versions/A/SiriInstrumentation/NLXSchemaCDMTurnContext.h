@class NLXSchemaNLXLegacyNLContext, NLXSchemaCDMNLContext, NSData;

@interface NLXSchemaCDMTurnContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMNLContext *nlContext;
@property (nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) NLXSchemaNLXLegacyNLContext *legacyNlContext;
@property (nonatomic) BOOL hasLegacyNlContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTurncontexttype;

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
- (void)deleteNlContext;
- (void)deleteLegacyNlContext;

@end

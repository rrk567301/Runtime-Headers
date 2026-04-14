@class NLXSchemaNLXLegacyNLContext, NLXSchemaCDMNLContext, NSData;

@interface NLXSchemaCDMTurnContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMNLContext *nlContext;
@property (nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) NLXSchemaNLXLegacyNLContext *legacyNlContext;
@property (nonatomic) BOOL hasLegacyNlContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTurncontexttype;

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
- (void)deleteNlContext;
- (void)deleteLegacyNlContext;

@end

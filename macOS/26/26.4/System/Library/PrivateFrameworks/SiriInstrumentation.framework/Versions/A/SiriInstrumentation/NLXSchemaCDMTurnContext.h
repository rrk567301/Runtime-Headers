@class NLXSchemaNLXLegacyNLContext, NLXSchemaCDMNLContext, NSData;

@interface NLXSchemaCDMTurnContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMNLContext *nlContext;
@property (nonatomic) BOOL hasNlContext;
@property (retain, nonatomic) NLXSchemaNLXLegacyNLContext *legacyNlContext;
@property (nonatomic) BOOL hasLegacyNlContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTurncontexttype;

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
- (void)deleteNlContext;
- (void)deleteLegacyNlContext;

@end

@class NSData, NLXSchemaCDMSiriClientSetupLink;

@interface NLXSchemaCDMSetupLink : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriClientSetupLink *siriClientSetupLink;
@property (nonatomic) BOOL hasSiriClientSetupLink;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichNlxclients;

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
- (void)deleteSiriClientSetupLink;

@end

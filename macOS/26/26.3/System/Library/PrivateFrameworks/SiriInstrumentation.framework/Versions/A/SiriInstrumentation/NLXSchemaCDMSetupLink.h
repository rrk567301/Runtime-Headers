@class NSData, NLXSchemaCDMSiriClientSetupLink;

@interface NLXSchemaCDMSetupLink : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriClientSetupLink *siriClientSetupLink;
@property (nonatomic) BOOL hasSiriClientSetupLink;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichNlxclients;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteSiriClientSetupLink;

@end

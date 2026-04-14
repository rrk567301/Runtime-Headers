@class NSData, NLXSchemaCDMSiriClientSetupLink;

@interface NLXSchemaCDMSetupLink : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaCDMSiriClientSetupLink *siriClientSetupLink;
@property (nonatomic) BOOL hasSiriClientSetupLink;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichNlxclients;

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
- (void)deleteSiriClientSetupLink;

@end

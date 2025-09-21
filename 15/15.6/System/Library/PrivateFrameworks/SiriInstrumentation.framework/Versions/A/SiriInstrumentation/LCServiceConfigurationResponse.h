@class NSData, LCServiceLoggingConfiguration;

@interface LCServiceConfigurationResponse : SISchemaInstrumentationMessage

@property (retain, nonatomic) LCServiceLoggingConfiguration *configuration;
@property (nonatomic) char hasConfiguration;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichResponse;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteConfiguration;
- (id)suppressMessageUnderConditions;

@end

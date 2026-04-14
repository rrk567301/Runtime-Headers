@class NSData, LCServiceLoggingConfiguration;

@interface LCServiceConfigurationResponse : SISchemaInstrumentationMessage

@property (retain, nonatomic) LCServiceLoggingConfiguration *configuration;
@property (nonatomic) BOOL hasConfiguration;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichResponse;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteConfiguration;

@end

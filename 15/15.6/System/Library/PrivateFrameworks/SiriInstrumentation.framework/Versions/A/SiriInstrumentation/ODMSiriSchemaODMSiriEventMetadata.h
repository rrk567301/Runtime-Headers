@class NSString, ODMSiriSchemaODMTrialExperimentIdentifiers, NSData, SISchemaUUID;

@interface ODMSiriSchemaODMSiriEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *odmId;
@property (nonatomic) char hasOdmId;
@property (copy, nonatomic) NSString *pluginVersion;
@property (nonatomic) char hasPluginVersion;
@property (retain, nonatomic) ODMSiriSchemaODMTrialExperimentIdentifiers *trialExperimentIdentifiers;
@property (nonatomic) char hasTrialExperimentIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteOdmId;
- (void)deletePluginVersion;
- (void)deleteTrialExperimentIdentifiers;
- (id)suppressMessageUnderConditions;

@end

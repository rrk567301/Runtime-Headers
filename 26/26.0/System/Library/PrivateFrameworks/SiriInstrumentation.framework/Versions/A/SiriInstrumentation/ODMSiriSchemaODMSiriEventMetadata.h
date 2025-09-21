@class NSString, ODMSiriSchemaODMTrialExperimentIdentifiers, NSData, SISchemaUUID;

@interface ODMSiriSchemaODMSiriEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *odmId;
@property (nonatomic) BOOL hasOdmId;
@property (copy, nonatomic) NSString *pluginVersion;
@property (nonatomic) BOOL hasPluginVersion;
@property (retain, nonatomic) ODMSiriSchemaODMTrialExperimentIdentifiers *trialExperimentIdentifiers;
@property (nonatomic) BOOL hasTrialExperimentIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteOdmId;
- (void)deletePluginVersion;
- (void)deleteTrialExperimentIdentifiers;

@end

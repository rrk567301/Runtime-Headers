@class ODDSiriSchemaODDDeviceAndUsageDynamicDimensions, ODDSiriSchemaODDDeviceAndUsageAppTaskCounts, NSData;

@interface ODDSiriSchemaODDAssistantDiagnosticAndUsageOptInDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDDeviceAndUsageDynamicDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDDeviceAndUsageAppTaskCounts *appTaskCounts;
@property (nonatomic) BOOL hasAppTaskCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteAppTaskCounts;
- (void)deleteDimensions;

@end

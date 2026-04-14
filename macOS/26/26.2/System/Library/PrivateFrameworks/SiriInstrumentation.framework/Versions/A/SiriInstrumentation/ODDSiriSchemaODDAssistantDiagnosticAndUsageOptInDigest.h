@class ODDSiriSchemaODDDeviceAndUsageDynamicDimensions, ODDSiriSchemaODDDeviceAndUsageAppTaskCounts, NSData;

@interface ODDSiriSchemaODDAssistantDiagnosticAndUsageOptInDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDDeviceAndUsageDynamicDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDDeviceAndUsageAppTaskCounts *appTaskCounts;
@property (nonatomic) BOOL hasAppTaskCounts;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteAppTaskCounts;
- (void)deleteDimensions;

@end

@class ODDSiriSchemaODDDeviceAndUsageDynamicDimensions, ODDSiriSchemaODDDeviceAndUsageAppTaskCounts, NSData;

@interface ODDSiriSchemaODDAssistantDiagnosticAndUsageOptInDigest : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODDSiriSchemaODDDeviceAndUsageDynamicDimensions *dimensions;
@property (nonatomic) BOOL hasDimensions;
@property (retain, nonatomic) ODDSiriSchemaODDDeviceAndUsageAppTaskCounts *appTaskCounts;
@property (nonatomic) BOOL hasAppTaskCounts;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteAppTaskCounts;
- (void)deleteDimensions;

@end

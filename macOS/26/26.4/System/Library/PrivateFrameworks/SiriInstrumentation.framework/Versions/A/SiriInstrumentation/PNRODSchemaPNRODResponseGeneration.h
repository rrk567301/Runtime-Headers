@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODResponseGeneration : SISchemaInstrumentationMessage {
    struct { unsigned char responseGenerationType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *responseGenerationID;
@property (nonatomic) BOOL hasResponseGenerationID;
@property (nonatomic) int responseGenerationType;
@property (nonatomic) BOOL hasResponseGenerationType;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationHandleTime;
@property (nonatomic) BOOL hasResponseGenerationHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationOverrideTime;
@property (nonatomic) BOOL hasResponseGenerationOverrideTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationValidationTime;
@property (nonatomic) BOOL hasResponseGenerationValidationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationCatalogTime;
@property (nonatomic) BOOL hasResponseGenerationCatalogTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationInferenceTime;
@property (nonatomic) BOOL hasResponseGenerationInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationHallucinationDetectionTime;
@property (nonatomic) BOOL hasResponseGenerationHallucinationDetectionTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationGMSCallTime;
@property (nonatomic) BOOL hasResponseGenerationGMSCallTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationCacheManagerTime;
@property (nonatomic) BOOL hasResponseGenerationCacheManagerTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) BOOL hasFailureInfo;
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
- (void)deleteFailureInfo;
- (void)deleteResponseGenerationCacheManagerTime;
- (void)deleteResponseGenerationCatalogTime;
- (void)deleteResponseGenerationGMSCallTime;
- (void)deleteResponseGenerationHallucinationDetectionTime;
- (void)deleteResponseGenerationHandleTime;
- (void)deleteResponseGenerationID;
- (void)deleteResponseGenerationInferenceTime;
- (void)deleteResponseGenerationOverrideTime;
- (void)deleteResponseGenerationType;
- (void)deleteResponseGenerationValidationTime;

@end

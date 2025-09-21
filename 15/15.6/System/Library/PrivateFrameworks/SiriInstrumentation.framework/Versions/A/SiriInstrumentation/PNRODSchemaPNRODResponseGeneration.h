@class PNRODSchemaPNRODMetricDuration, NSData, PNRODSchemaPNRODFailureInfo, SISchemaUUID;

@interface PNRODSchemaPNRODResponseGeneration : SISchemaInstrumentationMessage {
    struct { unsigned char responseGenerationType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *responseGenerationID;
@property (nonatomic) char hasResponseGenerationID;
@property (nonatomic) int responseGenerationType;
@property (nonatomic) char hasResponseGenerationType;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationHandleTime;
@property (nonatomic) char hasResponseGenerationHandleTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationOverrideTime;
@property (nonatomic) char hasResponseGenerationOverrideTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationValidationTime;
@property (nonatomic) char hasResponseGenerationValidationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationCatalogTime;
@property (nonatomic) char hasResponseGenerationCatalogTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationInferenceTime;
@property (nonatomic) char hasResponseGenerationInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationHallucinationDetectionTime;
@property (nonatomic) char hasResponseGenerationHallucinationDetectionTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationGMSCallTime;
@property (nonatomic) char hasResponseGenerationGMSCallTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationCacheManagerTime;
@property (nonatomic) char hasResponseGenerationCacheManagerTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) char hasFailureInfo;
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
- (id)suppressMessageUnderConditions;

@end

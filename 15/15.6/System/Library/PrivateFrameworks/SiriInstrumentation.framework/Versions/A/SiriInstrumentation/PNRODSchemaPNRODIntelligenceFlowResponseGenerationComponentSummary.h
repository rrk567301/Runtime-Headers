@class NSString, PNRODSchemaPNRODMetricDuration, NSData, SISchemaUUID, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPNRODIntelligenceFlowResponseGenerationComponentSummary : SISchemaInstrumentationMessage {
    struct { unsigned char responseIsValidInput : 1; unsigned char responseIsStaticDialogueProvided : 1; unsigned char responseInferenceLocation : 1; unsigned char responseIsFallback : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *planId;
@property (nonatomic) char hasPlanId;
@property (retain, nonatomic) SISchemaUUID *clientRequestId;
@property (nonatomic) char hasClientRequestId;
@property (retain, nonatomic) SISchemaUUID *rawQueryEventId;
@property (nonatomic) char hasRawQueryEventId;
@property (nonatomic) char responseIsValidInput;
@property (nonatomic) char hasResponseIsValidInput;
@property (nonatomic) char responseIsStaticDialogueProvided;
@property (nonatomic) char hasResponseIsStaticDialogueProvided;
@property (copy, nonatomic) NSString *responseMobileAssetVersion;
@property (nonatomic) char hasResponseMobileAssetVersion;
@property (nonatomic) int responseInferenceLocation;
@property (nonatomic) char hasResponseInferenceLocation;
@property (nonatomic) char responseIsFallback;
@property (nonatomic) char hasResponseIsFallback;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responsePreparationTime;
@property (nonatomic) char hasResponsePreparationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseInputValidationTime;
@property (nonatomic) char hasResponseInputValidationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseOverridesTime;
@property (nonatomic) char hasResponseOverridesTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseCatalogueRetrievalTime;
@property (nonatomic) char hasResponseCatalogueRetrievalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseCATHydrationTime;
@property (nonatomic) char hasResponseCATHydrationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseModelInferenceTime;
@property (nonatomic) char hasResponseModelInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseHallucinationInferenceTime;
@property (nonatomic) char hasResponseHallucinationInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseSafetyInferenceTime;
@property (nonatomic) char hasResponseSafetyInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationTime;
@property (nonatomic) char hasResponseGenerationTime;
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
- (void)deleteResponseInferenceLocation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteClientRequestId;
- (void)deleteFailureInfo;
- (void)deletePlanId;
- (void)deleteRawQueryEventId;
- (void)deleteResponseCATHydrationTime;
- (void)deleteResponseCatalogueRetrievalTime;
- (void)deleteResponseGenerationTime;
- (void)deleteResponseHallucinationInferenceTime;
- (void)deleteResponseInputValidationTime;
- (void)deleteResponseIsFallback;
- (void)deleteResponseIsStaticDialogueProvided;
- (void)deleteResponseIsValidInput;
- (void)deleteResponseMobileAssetVersion;
- (void)deleteResponseModelInferenceTime;
- (void)deleteResponseOverridesTime;
- (void)deleteResponsePreparationTime;
- (void)deleteResponseSafetyInferenceTime;
- (id)suppressMessageUnderConditions;

@end

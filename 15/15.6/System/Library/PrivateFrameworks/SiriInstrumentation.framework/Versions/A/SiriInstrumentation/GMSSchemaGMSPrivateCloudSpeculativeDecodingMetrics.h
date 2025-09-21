@class NSData;

@interface GMSSchemaGMSPrivateCloudSpeculativeDecodingMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char speculativeDecodingAcceptanceRate : 1; unsigned char draftModelInferenceCallCount : 1; unsigned char targetModelInferenceCallCount : 1; unsigned char draftOutputTokenCount : 1; unsigned char targetOutputTokenCount : 1; unsigned char draftModelTotalInferenceLatencyMillis : 1; unsigned char targetModelTotalInferenceLatencyMillis : 1; unsigned char draftSteps : 1; } _has;
}

@property (nonatomic) float speculativeDecodingAcceptanceRate;
@property (nonatomic) char hasSpeculativeDecodingAcceptanceRate;
@property (nonatomic) unsigned int draftModelInferenceCallCount;
@property (nonatomic) char hasDraftModelInferenceCallCount;
@property (nonatomic) unsigned int targetModelInferenceCallCount;
@property (nonatomic) char hasTargetModelInferenceCallCount;
@property (nonatomic) unsigned int draftOutputTokenCount;
@property (nonatomic) char hasDraftOutputTokenCount;
@property (nonatomic) unsigned int targetOutputTokenCount;
@property (nonatomic) char hasTargetOutputTokenCount;
@property (nonatomic) unsigned long long draftModelTotalInferenceLatencyMillis;
@property (nonatomic) char hasDraftModelTotalInferenceLatencyMillis;
@property (nonatomic) unsigned long long targetModelTotalInferenceLatencyMillis;
@property (nonatomic) char hasTargetModelTotalInferenceLatencyMillis;
@property (nonatomic) unsigned long long draftSteps;
@property (nonatomic) char hasDraftSteps;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDraftModelInferenceCallCount;
- (void)deleteDraftModelTotalInferenceLatencyMillis;
- (void)deleteDraftOutputTokenCount;
- (void)deleteDraftSteps;
- (void)deleteSpeculativeDecodingAcceptanceRate;
- (void)deleteTargetModelInferenceCallCount;
- (void)deleteTargetModelTotalInferenceLatencyMillis;
- (void)deleteTargetOutputTokenCount;
- (id)suppressMessageUnderConditions;

@end

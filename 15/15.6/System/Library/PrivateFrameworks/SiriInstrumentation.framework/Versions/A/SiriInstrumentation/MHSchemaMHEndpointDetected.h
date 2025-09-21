@class NSData, MHSchemaMHStatisticDistributionInfo, MHSchemaMHEndpointFeaturesAtEndpoint, SISchemaVersion, MHSchemaMHEndpointerTimeoutMetadata, SISchemaUUID;

@interface MHSchemaMHEndpointDetected : SISchemaInstrumentationMessage {
    struct { unsigned char endpointerType : 1; unsigned char endpointAudioDurationInNs : 1; unsigned char firstBufferTimeInNs : 1; unsigned char endpointedBufferTimeInNs : 1; unsigned char endpointerDecisionLagInNs : 1; unsigned char extraDelayInNs : 1; unsigned char derivedBufferTimeFromHistoricalAudio : 1; unsigned char endpointerThreshold : 1; unsigned char endpointerScore : 1; unsigned char audioSkippedDurationInNs : 1; unsigned char endpointResetPositionInNs : 1; unsigned char trpDetectionType : 1; } _has;
}

@property (nonatomic) int endpointerType;
@property (nonatomic) char hasEndpointerType;
@property (nonatomic) unsigned long long endpointAudioDurationInNs;
@property (nonatomic) char hasEndpointAudioDurationInNs;
@property (nonatomic) unsigned long long firstBufferTimeInNs;
@property (nonatomic) char hasFirstBufferTimeInNs;
@property (nonatomic) unsigned long long endpointedBufferTimeInNs;
@property (nonatomic) char hasEndpointedBufferTimeInNs;
@property (retain, nonatomic) MHSchemaMHEndpointFeaturesAtEndpoint *endpointFeaturesAtEndpoint;
@property (nonatomic) char hasEndpointFeaturesAtEndpoint;
@property (nonatomic) unsigned long long endpointerDecisionLagInNs;
@property (nonatomic) char hasEndpointerDecisionLagInNs;
@property (nonatomic) unsigned long long extraDelayInNs;
@property (nonatomic) char hasExtraDelayInNs;
@property (retain, nonatomic) SISchemaVersion *endpointModelConfigVersion;
@property (nonatomic) char hasEndpointModelConfigVersion;
@property (nonatomic) char derivedBufferTimeFromHistoricalAudio;
@property (nonatomic) char hasDerivedBufferTimeFromHistoricalAudio;
@property (nonatomic) float endpointerThreshold;
@property (nonatomic) char hasEndpointerThreshold;
@property (nonatomic) float endpointerScore;
@property (nonatomic) char hasEndpointerScore;
@property (nonatomic) unsigned long long audioSkippedDurationInNs;
@property (nonatomic) char hasAudioSkippedDurationInNs;
@property (nonatomic) unsigned long long endpointResetPositionInNs;
@property (nonatomic) char hasEndpointResetPositionInNs;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *asrFeatureLatencyDistribution;
@property (nonatomic) char hasAsrFeatureLatencyDistribution;
@property (retain, nonatomic) MHSchemaMHEndpointerTimeoutMetadata *timeoutMetadata;
@property (nonatomic) char hasTimeoutMetadata;
@property (nonatomic) int trpDetectionType;
@property (nonatomic) char hasTrpDetectionType;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) char hasTrpId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndpointAudioDurationInNs;
- (void)deleteEndpointerDecisionLagInNs;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEndpointResetPositionInNs;
- (void)deleteAsrFeatureLatencyDistribution;
- (void)deleteAudioSkippedDurationInNs;
- (void)deleteDerivedBufferTimeFromHistoricalAudio;
- (void)deleteEndpointFeaturesAtEndpoint;
- (void)deleteEndpointModelConfigVersion;
- (void)deleteEndpointedBufferTimeInNs;
- (void)deleteEndpointerScore;
- (void)deleteEndpointerThreshold;
- (void)deleteEndpointerType;
- (void)deleteExtraDelayInNs;
- (void)deleteFirstBufferTimeInNs;
- (void)deleteTimeoutMetadata;
- (void)deleteTrpDetectionType;
- (void)deleteTrpId;
- (id)suppressMessageUnderConditions;

@end

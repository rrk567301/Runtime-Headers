@interface COMAPPLEPROACTIVEGMSGMSInferenceEvent : PBCodable <NSCopying> {
    struct { unsigned char assetLoadAndTtftCombinedMillis : 1; unsigned char extendInferenceMillis : 1; unsigned char inferenceTimeMillis : 1; unsigned char inputTokensCount : 1; unsigned char outputTokensCount : 1; unsigned char sdDraftModelInferenceCallCount : 1; unsigned char sdDraftModelTotalLatencyMillis : 1; unsigned char sdDraftOutputTokensCount : 1; unsigned char sdDraftTokenAcceptanceRate : 1; unsigned char sdSpeculationSuccessRate : 1; unsigned char sdTargetModelInferenceCallCount : 1; unsigned char sdTargetModelTotalLatencyMillis : 1; unsigned char sdTinyModelInferenceCallCount : 1; unsigned char sdTinyModelTotalLatencyMillis : 1; unsigned char sdTinyTokenAcceptanceRate : 1; unsigned char sdTotalOutputTokensCount : 1; unsigned char timeToFirstTokenMillis : 1; unsigned char tokensPerSecond : 1; unsigned char totalLatencyMillis : 1; unsigned char version : 1; unsigned char requestType : 1; } _has;
}

@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) char hasInputTokensCount;
@property (nonatomic) long long inputTokensCount;
@property (nonatomic) char hasOutputTokensCount;
@property (nonatomic) long long outputTokensCount;
@property (nonatomic) char hasTotalLatencyMillis;
@property (nonatomic) double totalLatencyMillis;
@property (nonatomic) char hasTimeToFirstTokenMillis;
@property (nonatomic) double timeToFirstTokenMillis;
@property (nonatomic) char hasTokensPerSecond;
@property (nonatomic) double tokensPerSecond;
@property (nonatomic) char hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) char hasInferenceTimeMillis;
@property (nonatomic) double inferenceTimeMillis;
@property (nonatomic) char hasExtendInferenceMillis;
@property (nonatomic) double extendInferenceMillis;
@property (nonatomic) char hasAssetLoadAndTtftCombinedMillis;
@property (nonatomic) double assetLoadAndTtftCombinedMillis;
@property (nonatomic) char hasSdTinyModelInferenceCallCount;
@property (nonatomic) long long sdTinyModelInferenceCallCount;
@property (nonatomic) char hasSdDraftModelInferenceCallCount;
@property (nonatomic) long long sdDraftModelInferenceCallCount;
@property (nonatomic) char hasSdTargetModelInferenceCallCount;
@property (nonatomic) long long sdTargetModelInferenceCallCount;
@property (nonatomic) char hasSdDraftTokenAcceptanceRate;
@property (nonatomic) double sdDraftTokenAcceptanceRate;
@property (nonatomic) char hasSdTinyTokenAcceptanceRate;
@property (nonatomic) double sdTinyTokenAcceptanceRate;
@property (nonatomic) char hasSdSpeculationSuccessRate;
@property (nonatomic) double sdSpeculationSuccessRate;
@property (nonatomic) char hasSdDraftOutputTokensCount;
@property (nonatomic) long long sdDraftOutputTokensCount;
@property (nonatomic) char hasSdTotalOutputTokensCount;
@property (nonatomic) long long sdTotalOutputTokensCount;
@property (nonatomic) char hasSdTinyModelTotalLatencyMillis;
@property (nonatomic) double sdTinyModelTotalLatencyMillis;
@property (nonatomic) char hasSdDraftModelTotalLatencyMillis;
@property (nonatomic) double sdDraftModelTotalLatencyMillis;
@property (nonatomic) char hasSdTargetModelTotalLatencyMillis;
@property (nonatomic) double sdTargetModelTotalLatencyMillis;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsRequestType:(id)a0;
- (id)requestTypeAsString:(int)a0;

@end

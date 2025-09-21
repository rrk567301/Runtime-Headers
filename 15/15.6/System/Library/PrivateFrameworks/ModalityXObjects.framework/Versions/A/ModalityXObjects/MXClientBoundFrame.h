@class MXRequestMitigated, MXSpeechProfileBuildResponse, MXASRResult, MXProcessingError, MXSpeechProfileRebuildNeeded, MXRequestComplete;

@interface MXClientBoundFrame : PBCodable <NSCopying> {
    struct { unsigned char payload : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestComplete;
@property (retain, nonatomic) MXRequestComplete *requestComplete;
@property (readonly, nonatomic) char hasProcessingError;
@property (retain, nonatomic) MXProcessingError *processingError;
@property (readonly, nonatomic) char hasAsrResult;
@property (retain, nonatomic) MXASRResult *asrResult;
@property (readonly, nonatomic) char hasSpeechProfileRebuildNeeded;
@property (retain, nonatomic) MXSpeechProfileRebuildNeeded *speechProfileRebuildNeeded;
@property (readonly, nonatomic) char hasRequestMitigated;
@property (retain, nonatomic) MXRequestMitigated *requestMitigated;
@property (readonly, nonatomic) char hasSpeechProfileResponse;
@property (retain, nonatomic) MXSpeechProfileBuildResponse *speechProfileResponse;
@property (nonatomic) char hasPayload;
@property (nonatomic) int payload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPayload:(id)a0;
- (void)clearOneofValuesForPayload;
- (id)payloadAsString:(int)a0;

@end

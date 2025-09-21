@class MXRequestMitigated, MXSpeechProfileBuildResponse, MXASRResult, MXProcessingError, MXSpeechProfileRebuildNeeded, MXRequestComplete;

@interface MXClientBoundFrame : PBCodable <NSCopying> {
    struct { unsigned char payload : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestComplete;
@property (retain, nonatomic) MXRequestComplete *requestComplete;
@property (readonly, nonatomic) BOOL hasProcessingError;
@property (retain, nonatomic) MXProcessingError *processingError;
@property (readonly, nonatomic) BOOL hasAsrResult;
@property (retain, nonatomic) MXASRResult *asrResult;
@property (readonly, nonatomic) BOOL hasSpeechProfileRebuildNeeded;
@property (retain, nonatomic) MXSpeechProfileRebuildNeeded *speechProfileRebuildNeeded;
@property (readonly, nonatomic) BOOL hasRequestMitigated;
@property (retain, nonatomic) MXRequestMitigated *requestMitigated;
@property (readonly, nonatomic) BOOL hasSpeechProfileResponse;
@property (retain, nonatomic) MXSpeechProfileBuildResponse *speechProfileResponse;
@property (nonatomic) BOOL hasPayload;
@property (nonatomic) int payload;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsPayload:(id)a0;
- (void)clearOneofValuesForPayload;
- (id)payloadAsString:(int)a0;

@end

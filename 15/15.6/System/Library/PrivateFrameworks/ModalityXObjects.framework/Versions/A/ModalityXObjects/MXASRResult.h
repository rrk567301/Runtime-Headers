@class NSString, MXRecognitionCandidate, MXFinalSpeechRecognitionResponse;

@interface MXASRResult : PBCodable <NSCopying> {
    struct { unsigned char payload : 1; } _has;
}

@property (readonly, nonatomic) char hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) char hasRecognitionCandidate;
@property (retain, nonatomic) MXRecognitionCandidate *recognitionCandidate;
@property (readonly, nonatomic) char hasFinalSpeechRecognitionResponse;
@property (retain, nonatomic) MXFinalSpeechRecognitionResponse *finalSpeechRecognitionResponse;
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

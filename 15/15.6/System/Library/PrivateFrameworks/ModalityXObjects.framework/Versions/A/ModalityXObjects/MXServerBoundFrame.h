@class MXAudioFrame, MXSpeechProfileBuildRequest, MXCancelRequest, MXStreamingSpeechProfileBegin, MXStreamingSpeechProfileCommit, MXBeginDictation, MXSpeechProfile, MXBeginRequest, MXStreamingSpeechProfileAddData, MXSessionMetadata;

@interface MXServerBoundFrame : PBCodable <NSCopying> {
    struct { unsigned char payload : 1; } _has;
}

@property (readonly, nonatomic) char hasSessionMetadata;
@property (retain, nonatomic) MXSessionMetadata *sessionMetadata;
@property (readonly, nonatomic) char hasBeginRequest;
@property (retain, nonatomic) MXBeginRequest *beginRequest;
@property (readonly, nonatomic) char hasAudioFrame;
@property (retain, nonatomic) MXAudioFrame *audioFrame;
@property (readonly, nonatomic) char hasSpeechProfile;
@property (retain, nonatomic) MXSpeechProfile *speechProfile;
@property (readonly, nonatomic) char hasCancelRequest;
@property (retain, nonatomic) MXCancelRequest *cancelRequest;
@property (readonly, nonatomic) char hasBeginDictation;
@property (retain, nonatomic) MXBeginDictation *beginDictation;
@property (readonly, nonatomic) char hasSpeechProfileRequest;
@property (retain, nonatomic) MXSpeechProfileBuildRequest *speechProfileRequest;
@property (readonly, nonatomic) char hasStreamingSpeechProfileRequest;
@property (retain, nonatomic) MXStreamingSpeechProfileBegin *streamingSpeechProfileRequest;
@property (readonly, nonatomic) char hasStreamingSpeechProfileData;
@property (retain, nonatomic) MXStreamingSpeechProfileAddData *streamingSpeechProfileData;
@property (readonly, nonatomic) char hasStreamingSpeechProfileCommit;
@property (retain, nonatomic) MXStreamingSpeechProfileCommit *streamingSpeechProfileCommit;
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

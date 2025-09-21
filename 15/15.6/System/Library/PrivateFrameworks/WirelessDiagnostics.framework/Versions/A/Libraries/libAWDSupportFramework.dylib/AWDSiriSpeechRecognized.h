@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {
    struct { unsigned char durationFromVoiceRecordingEnd : 1; unsigned char durationFromVoiceSendEnd : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDurationFromVoiceRecordingEnd;
@property (nonatomic) unsigned long long durationFromVoiceRecordingEnd;
@property (nonatomic) char hasDurationFromVoiceSendEnd;
@property (nonatomic) unsigned long long durationFromVoiceSendEnd;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end

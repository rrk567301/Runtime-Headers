@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRVoiceInputDevice : PBCodable <NSCopying> {
    struct { unsigned char deviceID : 1; unsigned char recordingState : 1; } _has;
}

@property (nonatomic) char hasDeviceID;
@property (nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) char hasDescriptor;
@property (retain, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic) char hasRecordingState;
@property (nonatomic) int recordingState;

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
- (int)StringAsRecordingState:(id)a0;
- (id)recordingStateAsString:(int)a0;

@end
